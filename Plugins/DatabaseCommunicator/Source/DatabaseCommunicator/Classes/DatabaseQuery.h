//Copyright 2021 John Poole. All Rights Reserved.
//http://www.unixodbc.org/download.html
#pragma once
#if !defined(PLATFORM_WINDOWS)
#define PLATFORM_WINDOWS 0
#endif
#if PLATFORM_WINDOWS
#include "AllowWindowsPlatformTypes.h"
#include "sql.h"
#include "sqlext.h"
#include "HideWindowsPlatformTypes.h"
#else
#include "sql.h"
#include "sqlext.h"
#endif
#include "AsyncWork.h"
#include "DatabaseStructs.h"
#include "DatabaseQueryResult.h"
#include "DatabaseQuery.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQueryTaskDone, FQueryResultStruct, Succeeded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQueryFinished, UDatabaseQueryResult*, DatabaseQueryResult);

class QueryTask : public FNonAbandonableTask
{
	UDatabaseQuery* _DatabaseQuery;
	FDatabaseRowModel _DatabaseRowModel;
	FString _OdbcConnectionString;
	FString _SqlCommand;
public:
	FORCEINLINE TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(QueryTask, STATGROUP_ThreadPoolAsyncTasks); }
	FString& GetSqlCommand() { return _SqlCommand; }
	bool isCanceled;
	QueryTask(UDatabaseQuery* DatabaseQuery, FString OdbcConnectionString, FString SqlCommand, FDatabaseRowModel DatabaseRowModel);
	QueryTask(FString ConnectionString, FString SqlCommand, FDatabaseRowModel RowModel) :
		_DatabaseRowModel(RowModel), _OdbcConnectionString(ConnectionString), _SqlCommand(SqlCommand) {}
	QueryTask() {}
	~QueryTask();
	void DoWork();
};

UCLASS(Blueprintable)
class DATABASECOMMUNICATOR_API UDatabaseQuery : public UObject
{
	GENERATED_UCLASS_BODY()
private:
	bool bIsDestroyed = false;
public:	
	volatile bool IsRunning = false;
	FAutoDeleteAsyncTask<QueryTask>* Tasker;
	FQueryTaskDone OnQueryTaskDone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		UDatabaseQueryResult* DatabaseQueryResult;
	UPROPERTY(BlueprintAssignable, Category = "Database Communicator")
		FQueryFinished OnQueryFinished;

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Construct Query"), Category = "Database Communicator")
		static UDatabaseQuery* ConstructUQuery();
	UFUNCTION(BlueprintCallable, Category = "Database Communicator")
		void ExecuteQueryAsync(FString OdbcConnectionString, FString SqlCommand, FDatabaseRowModel DatabaseRowModel);
	UFUNCTION()
		void QueryTaskComplete(FQueryResultStruct QueryResultStruct);
	virtual void BeginDestroy();
};