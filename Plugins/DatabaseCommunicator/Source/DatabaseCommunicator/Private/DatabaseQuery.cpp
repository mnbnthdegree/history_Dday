//Copyright 2021 John Poole. All Rights Reserved.
#include "DatabaseQuery.h"
#include "DatabaseCommunicatorPrivatePCH.h"

void extract_error(SQLHANDLE handle, SQLSMALLINT type)
{
	SQLINTEGER i = 0;
	SQLINTEGER native;
	SQLWCHAR state[7];
	SQLWCHAR text[1024];
	SQLSMALLINT len;
	SQLRETURN ret;
	do
	{
		ret = SQLGetDiagRec(type, handle, ++i, state, &native, text,
			sizeof(text), &len);
		if (SQL_SUCCEEDED(ret))
			UE_LOG(DatabaseCommunicatorLog, Error, TEXT("%s:%ld:%ld:%s\n"), state, i, native, text);
	} while (ret == SQL_SUCCESS);
}

QueryTask::QueryTask(UDatabaseQuery* DatabaseQuery, FString OdbcConnectionString, FString SqlCommand, FDatabaseRowModel DatabaseRowModel) // Here we can set parameters our class can get
{
	this->_DatabaseQuery = DatabaseQuery;
	this->_OdbcConnectionString = OdbcConnectionString;
	this->_SqlCommand = SqlCommand;
	this->_DatabaseRowModel = DatabaseRowModel;
}
QueryTask::~QueryTask()
{
	while (_DatabaseQuery->IsRunning)
	{
	}//Wait for query thread to finish
	UE_LOG(DatabaseCommunicatorLog, Log, TEXT("QueryTask Deleted"));
}
void QueryTask::DoWork()
{
	UE_LOG(DatabaseCommunicatorLog, Log, TEXT("QueryTask Started"));
	FQueryResultStruct QueryResultStruct = FQueryResultStruct();
	QueryResultStruct.Succeeded = false;
	SQLHANDLE sqlenvhandle = new SQLHANDLE();
	SQLHANDLE sqlconnectionhandle = new SQLHANDLE();
	SQLHSTMT sqlstatementhandle = new SQLHSTMT();
	SQLWCHAR retconstring[1024];
	// Allocate the SQL Environment handle
	SQLRETURN retCode = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlenvhandle);
	if (SQL_SUCCEEDED(retCode))
	{
		// Set attributes of the SQL Evnironment handle
		retCode = SQLSetEnvAttr(sqlenvhandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);
		if (retCode == SQL_SUCCESS)
		{
			// Allocate the SQL Connection handle
			retCode = SQLAllocHandle(SQL_HANDLE_DBC, sqlenvhandle, &sqlconnectionhandle);
			if (retCode == SQL_SUCCESS)
			{
				//Connect
				switch (SQLDriverConnect(sqlconnectionhandle, NULL, (SQLWCHAR*)*_OdbcConnectionString, SQL_NTS, retconstring, 1024, NULL, SQL_DRIVER_NOPROMPT))
				{
				case SQL_SUCCESS:
				case SQL_SUCCESS_WITH_INFO:
				{
					// Allocate the SQL Statement handle
					retCode = SQLAllocHandle(SQL_HANDLE_STMT, sqlconnectionhandle, &sqlstatementhandle);
					if (retCode != SQL_SUCCESS)
					{
						UE_LOG(DatabaseCommunicatorLog, Error, TEXT("Query failed allocating sqlstatementhandle."));
						extract_error(sqlconnectionhandle, SQL_HANDLE_DBC);
						extract_error(sqlstatementhandle, SQL_HANDLE_STMT);
						SQLFreeHandle(SQL_HANDLE_STMT, sqlstatementhandle);
						SQLDisconnect(sqlconnectionhandle);
						SQLFreeHandle(SQL_HANDLE_DBC, sqlconnectionhandle);
						SQLFreeHandle(SQL_HANDLE_ENV, sqlenvhandle);
						_DatabaseQuery->QueryTaskComplete(QueryResultStruct);
						_DatabaseQuery->IsRunning = false;
						return;
					}
					UE_LOG(DatabaseCommunicatorLog, Log, TEXT("Executing query | %s"), *_SqlCommand);
					//Execute Query
					retCode = SQLExecDirect(sqlstatementhandle, (SQLWCHAR*)*_SqlCommand, SQL_NTS);
					if (retCode != SQL_SUCCESS)
					{
						UE_LOG(DatabaseCommunicatorLog, Error, TEXT("Query failed to execute command: %s"), *_SqlCommand);
						extract_error(sqlstatementhandle, SQL_HANDLE_STMT);
						SQLFreeHandle(SQL_HANDLE_STMT, sqlstatementhandle);
						SQLDisconnect(sqlconnectionhandle);
						SQLFreeHandle(SQL_HANDLE_DBC, sqlconnectionhandle);
						SQLFreeHandle(SQL_HANDLE_ENV, sqlenvhandle);
						_DatabaseQuery->QueryTaskComplete(QueryResultStruct);
						_DatabaseQuery->IsRunning = false;
						return;
					}
					SQLSMALLINT ResultColsNumber;
					SQLNumResultCols(sqlstatementhandle, &ResultColsNumber);
					if (ResultColsNumber > 0)
					{
						SQLLEN Length = 0;
						SQLLEN* LengthPtr = &Length;						
						while (SQLFetch(sqlstatementhandle) == SQL_SUCCESS)
						{
							//Create a new Row
							FQueryResultRowStruct NewRow = FQueryResultRowStruct();
							//Create & Populate the Column Values			
							if (_DatabaseRowModel.DatabaseColumnModels.Num() <= 0)
							{
								UE_LOG(DatabaseCommunicatorLog, Log, TEXT("Query does not contain column models"));
							}
							else
							{
								for (int32 i = 0; i < _DatabaseRowModel.DatabaseColumnModels.Num(); i++)
								{
									SQLUSMALLINT ColumnNumber = i + 1;
									FQueryResultColumnStruct NewColumn = FQueryResultColumnStruct();
									NewColumn.ColumnName = _DatabaseRowModel.DatabaseColumnModels[i].ColumnName;
									NewColumn.ColumnType = _DatabaseRowModel.DatabaseColumnModels[i].ColumnType;
									switch (_DatabaseRowModel.DatabaseColumnModels[i].ColumnType)
									{
									case EDatabaseColumnType::Boolean:
									{
										int32 L = 0;
										SQLGetData(sqlstatementhandle, ColumnNumber, SQL_C_SHORT, &L, 4, NULL);
										NewColumn.BoolValue = (L == 1);
										break;
									}
									case EDatabaseColumnType::Date:
									{
										DATE_STRUCT DT = { 0, 0, 0 };
										SQLGetData(sqlstatementhandle, ColumnNumber, SQL_C_DATE, &DT, sizeof(SQL_C_DATE), NULL);
										FDateTime FDate;
										if (DT.year != 0 && DT.month != 0 && DT.day != 0)
											FDate = { DT.year, DT.month, DT.day, 0, 0, 0, 0 };
										else
											FDate = NULL;
										NewColumn.DateTimeValue = FDate;
										break;
									}
									case EDatabaseColumnType::Float:
									{
										double doubleVal = 0;
										SQLGetData(sqlstatementhandle, ColumnNumber, SQL_C_DOUBLE, &doubleVal, sizeof(SQL_C_DOUBLE), LengthPtr);
										NewColumn.FloatValue = (float)doubleVal;
										break;
									}
									case EDatabaseColumnType::Int:
									{
										int32 Integer32 = 0;
										SQLRETURN  RETURN = SQLGetData(sqlstatementhandle, ColumnNumber, SQL_INTEGER, &Integer32, sizeof(int32), LengthPtr);
										if (*LengthPtr != SQL_NULL_DATA)	//Check for nulls
											NewColumn.IntValue = Integer32;
										else
										{
											Integer32 = -1;
											NewColumn.IntValue = Integer32;
										}
										break;
									}
									case EDatabaseColumnType::Int64:
									{
										int64 Integer64 = 0;
										SQLRETURN  RETURN = SQLGetData(sqlstatementhandle, ColumnNumber, SQL_C_LONG, &Integer64, sizeof(int64), LengthPtr);
										if (*LengthPtr != SQL_NULL_DATA)	//Check for nulls						
											NewColumn.Int64Value = Integer64;
										else
										{
											Integer64 = -1;
											NewColumn.Int64Value = Integer64;
										}
										break;
									}
									case EDatabaseColumnType::String:
									{
										SQLLEN ColumnLength = 0;
										SQLColAttributesW(sqlstatementhandle, ColumnNumber, SQL_COLUMN_LENGTH, NULL, 0, NULL, &ColumnLength);
										//If the column is a (max) length in the DB col length will return as 0
										//So if 0 is returned as the length from ODBC, we hardcod it to INT32_MAX characters here
										//If your project is using some CRAZY long strings you may need to mod this
										UE_LOG(DatabaseCommunicatorLog, Log, TEXT("ColumnLength = %ld:"), ColumnLength);
										char* sqlChars;
										if (ColumnLength <= 0)
											sqlChars = new char[MAX_int32];
										else
											sqlChars = new char[ColumnLength];
										SQLGetData(sqlstatementhandle, ColumnNumber, SQL_C_CHAR, sqlChars, ColumnLength, LengthPtr);
										if (*LengthPtr != SQL_NULL_DATA) //Check for nulls
										{
											//Convert the data to FString
											switch (_DatabaseRowModel.DatabaseColumnModels[i].StringEncodingType)
											{
												case EEncodingType::Utf8:
												{
													NewColumn.StringValue = UTF8_TO_TCHAR(sqlChars);
													break;
												}
												default:
												{
													NewColumn.StringValue = sqlChars;
												}
												break;
											}
										}
										else
											NewColumn.StringValue = "";
										break;
									}
									case EDatabaseColumnType::Time:
									{
										TIME_STRUCT T = { 0, 0, 0 };
										SQLGetData(sqlstatementhandle, ColumnNumber, SQL_TYPE_TIME, &T, sizeof(SQL_TYPE_TIME), NULL);
										NewColumn.DateTimeValue = FDateTime(2000, 1, 1, T.hour, T.minute, T.second);
										break;
									}
									case EDatabaseColumnType::Timestamp:
									{
										TIMESTAMP_STRUCT T = { 0, 0, 0, 0, 0, 0, 0 };
										SQLGetData(sqlstatementhandle, ColumnNumber, SQL_TYPE_TIME, &T, sizeof(SQL_TYPE_TIMESTAMP), NULL);
										NewColumn.DateTimeValue = FDateTime(T.year, T.month, T.day, T.hour, T.minute, T.second);
										break;
									}
									default:
									{
										UE_LOG(DatabaseCommunicatorLog, Error, TEXT("Switching on column type failed!"));
										break;
									}
									}
									NewRow.ResultColumns.Add(NewColumn);
								}
								QueryResultStruct.ResultRows.Add(NewRow);
							}
						}
					}
					else
					{
						SQLLEN cRowCount;
						SQLRowCount(sqlstatementhandle, &cRowCount);
						if (cRowCount >= 0)
							UE_LOG(DatabaseCommunicatorLog, Log, TEXT("Query completed with %lld rows affected."), cRowCount);
					}
					SQLFreeHandle(SQL_HANDLE_STMT, sqlstatementhandle);
					SQLDisconnect(sqlconnectionhandle);
					SQLFreeHandle(SQL_HANDLE_DBC, sqlconnectionhandle);
					SQLFreeHandle(SQL_HANDLE_ENV, sqlenvhandle);
					QueryResultStruct.Succeeded = true;
					_DatabaseQuery->QueryTaskComplete(QueryResultStruct);
					_DatabaseQuery->IsRunning = false;
					return;
				}
				case SQL_INVALID_HANDLE:
					UE_LOG(DatabaseCommunicatorLog, Error, TEXT("Query failed connecting"));
					extract_error(sqlenvhandle, SQL_HANDLE_ENV);
					extract_error(sqlconnectionhandle, SQL_HANDLE_DBC);
					extract_error(sqlstatementhandle, SQL_HANDLE_STMT);
					SQLFreeHandle(SQL_HANDLE_STMT, sqlstatementhandle);
					SQLDisconnect(sqlconnectionhandle);
					SQLFreeHandle(SQL_HANDLE_DBC, sqlconnectionhandle);
					SQLFreeHandle(SQL_HANDLE_ENV, sqlenvhandle);
					UE_LOG(DatabaseCommunicatorLog, Error, TEXT("Query failed connecting to SQL with an invalid handle."));
					_DatabaseQuery->QueryTaskComplete(QueryResultStruct);
					_DatabaseQuery->IsRunning = false;
					return;
				default:
					UE_LOG(DatabaseCommunicatorLog, Error, TEXT("Query failed connecting"));
					extract_error(sqlenvhandle, SQL_HANDLE_ENV);
					extract_error(sqlconnectionhandle, SQL_HANDLE_DBC);
					extract_error(sqlstatementhandle, SQL_HANDLE_STMT);
					SQLFreeHandle(SQL_HANDLE_STMT, sqlstatementhandle);
					SQLDisconnect(sqlconnectionhandle);
					SQLFreeHandle(SQL_HANDLE_DBC, sqlconnectionhandle);
					SQLFreeHandle(SQL_HANDLE_ENV, sqlenvhandle);
					_DatabaseQuery->QueryTaskComplete(QueryResultStruct);
					_DatabaseQuery->IsRunning = false;
					return;
				}
			}
			else
			{
				UE_LOG(DatabaseCommunicatorLog, Error, TEXT("Query failed allocating sqlconnectionhandle."));

			}
		}
		else
		{
			UE_LOG(DatabaseCommunicatorLog, Error, TEXT("Query failed SetEnvAttr for sqlenvhandle."));
		}
	}
	UE_LOG(DatabaseCommunicatorLog, Error, TEXT("Database query failed."));

	extract_error(sqlenvhandle, SQL_HANDLE_ENV);
	extract_error(sqlconnectionhandle, SQL_HANDLE_DBC);
	extract_error(sqlstatementhandle, SQL_HANDLE_STMT);

	SQLFreeHandle(SQL_HANDLE_STMT, sqlstatementhandle);
	SQLDisconnect(sqlconnectionhandle);
	SQLFreeHandle(SQL_HANDLE_DBC, sqlconnectionhandle);
	SQLFreeHandle(SQL_HANDLE_ENV, sqlenvhandle);
	_DatabaseQuery->QueryTaskComplete(QueryResultStruct);
	_DatabaseQuery->IsRunning = false;
}

//UDatabaseQuery
UDatabaseQuery::UDatabaseQuery(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}
UDatabaseQuery* UDatabaseQuery::ConstructUQuery()
{
	UDatabaseQuery* NewQueryObject = NewObject<UDatabaseQuery>();
	return NewQueryObject;
}
void UDatabaseQuery::ExecuteQueryAsync(FString OdbcConnectionString, FString SqlCommand, FDatabaseRowModel DatabaseRowModel)
{
	IsRunning = true;
	DatabaseQueryResult = NewObject<UDatabaseQueryResult>();
	Tasker = (new FAutoDeleteAsyncTask<QueryTask>(this, OdbcConnectionString, SqlCommand, DatabaseRowModel));
	Tasker->StartBackgroundTask();
}
void UDatabaseQuery::QueryTaskComplete(FQueryResultStruct QueryResultStruct)
{
	AsyncTask(ENamedThreads::GameThread, [=]() {
		if (bIsDestroyed)
		{
			UE_LOG(DatabaseCommunicatorLog, Log, TEXT("Query destroyed before finished, unable to create new objects for results"));
			return;
		}
		//Convert FQueryResultStruct to UDatabaseQueryResult  then broadcast the BP friendly event
		DatabaseQueryResult->Succeeded = QueryResultStruct.Succeeded;
		for (int32 i = 0; i < QueryResultStruct.ResultRows.Num(); i++)
		{
			UResultRow* NewRow = NewObject<UResultRow>();
			for (int32 j = 0; j < QueryResultStruct.ResultRows[i].ResultColumns.Num(); j++)
			{
				UResultColumn* NewColumn;
				switch (QueryResultStruct.ResultRows[i].ResultColumns[j].ColumnType)
				{
				case EDatabaseColumnType::Boolean:
				{
					NewColumn = NewObject<UDatabaseBoolColumn>();
					UDatabaseBoolColumn* DatabaseBoolColumn = Cast<UDatabaseBoolColumn>(NewColumn);
					DatabaseBoolColumn->BoolValue = QueryResultStruct.ResultRows[i].ResultColumns[j].BoolValue;
					break;
				}
				case EDatabaseColumnType::Date:
				{
					NewColumn = NewObject<UDatabaseDateColumn>();
					UDatabaseDateColumn* DatabaseDateColumn = Cast<UDatabaseDateColumn>(NewColumn);
					DatabaseDateColumn->DateValue = QueryResultStruct.ResultRows[i].ResultColumns[j].DateTimeValue;
					break;
				}
				case EDatabaseColumnType::Float:
				{
					NewColumn = NewObject<UDatabaseFloatColumn>();
					UDatabaseFloatColumn* DatabaseFloatColumn = Cast<UDatabaseFloatColumn>(NewColumn);
					DatabaseFloatColumn->FloatValue = QueryResultStruct.ResultRows[i].ResultColumns[j].FloatValue;
					break;
				}
				case EDatabaseColumnType::Int:
				{
					NewColumn = NewObject<UDatabaseIntColumn>();
					UDatabaseIntColumn* DatabaseIntColumn = Cast<UDatabaseIntColumn>(NewColumn);
					DatabaseIntColumn->IntValue = QueryResultStruct.ResultRows[i].ResultColumns[j].IntValue;
					break;
				}
				case EDatabaseColumnType::Int64:
				{
					NewColumn = NewObject<UDatabaseInt64Column>();
					UDatabaseInt64Column* DatabaseInt64Column = Cast<UDatabaseInt64Column>(NewColumn);
					DatabaseInt64Column->Int64Value = QueryResultStruct.ResultRows[i].ResultColumns[j].Int64Value;
					break;
				}
				case EDatabaseColumnType::String:
				{
					NewColumn = NewObject<UDatabaseStringColumn>();
					UDatabaseStringColumn* DatabaseStringColumn = Cast<UDatabaseStringColumn>(NewColumn);
					DatabaseStringColumn->StringValue = QueryResultStruct.ResultRows[i].ResultColumns[j].StringValue;
					break;
				}
				case EDatabaseColumnType::Time:
				{
					NewColumn = NewObject<UDatabaseTimeColumn>();
					UDatabaseTimeColumn* DatabaseTimeColumn = Cast<UDatabaseTimeColumn>(NewColumn);
					DatabaseTimeColumn->TimeValue = QueryResultStruct.ResultRows[i].ResultColumns[j].DateTimeValue;
					break;
				}
				default:
				{
					NewColumn = NewObject<UResultColumn>();
					break;
				}
				}
				NewColumn->ColumnName = QueryResultStruct.ResultRows[i].ResultColumns[j].ColumnName;
				NewColumn->ColumnType = QueryResultStruct.ResultRows[i].ResultColumns[j].ColumnType;
				NewRow->ResultColumns.Add(NewColumn);
			}
			DatabaseQueryResult->ResultRows.Add(NewRow);
		}
		//Let the GameThread know the result is ready
		OnQueryTaskDone.Broadcast(QueryResultStruct);
		OnQueryFinished.Broadcast(DatabaseQueryResult);
		UE_LOG(DatabaseCommunicatorLog, Log, TEXT("Broadcasted the DatabaseQueryResult"));
		});
}
void UDatabaseQuery::BeginDestroy()
{
	bIsDestroyed = true;
	while (IsRunning)
	{
	}//Wait for query thread to finish	
	Super::BeginDestroy();
}