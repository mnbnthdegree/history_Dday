//Copyright 2021 John Poole. All Rights Reserved.
#pragma once
#include "DatabaseStructs.generated.h"

UENUM(BlueprintType)
enum class EDatabaseColumnType : uint8
{
	Boolean,
	Byte,
	Date,
	Float,
	Int,
	Int64,
	String,
	Time,
	Timestamp
};

UENUM(BlueprintType)
enum class EEncodingType : uint8
{
	Utf16,
	Utf8,
};

/**Structs are used in the query task because UObjects are not thread safe*/
USTRUCT()
struct DATABASECOMMUNICATOR_API FQueryResultColumnStruct
{
	GENERATED_USTRUCT_BODY()
public:
	bool BoolValue;
	FString ColumnName;
	EDatabaseColumnType ColumnType;
	uint8 ByteValue;
	FDateTime DateTimeValue;
	float FloatValue;
	int32 IntValue;
	int64 Int64Value;
	FString StringValue;
};
USTRUCT()
struct DATABASECOMMUNICATOR_API FQueryResultRowStruct
{
	GENERATED_USTRUCT_BODY()
public:
	TArray<FQueryResultColumnStruct> ResultColumns;
};
USTRUCT()
struct DATABASECOMMUNICATOR_API FQueryResultStruct
{
	GENERATED_USTRUCT_BODY()
public:
	TArray<FQueryResultRowStruct> ResultRows;
	bool Succeeded;
};

/**Required to allocate memory and set type of the result values*/
USTRUCT(BlueprintType, Blueprintable)
struct DATABASECOMMUNICATOR_API FDatabaseColumnModel
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		FString ColumnName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		EDatabaseColumnType ColumnType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator", meta = (ToolTip = "Only used for strings. Blueprint FStrings are Utf16, if your data needs to be converted with UTF8_TO_TCHAR() set this to true. If youre seeing ? marks also check your windows region settings. For example chinese characters will show as ? marks if you don't have your language set to chinese or use the beta UNICODE option for world wide language support."))
		EEncodingType StringEncodingType;
};

/**Contains the DatabaseColumnModels which must be in order of the result table*/
USTRUCT(BlueprintType, Blueprintable)
struct DATABASECOMMUNICATOR_API FDatabaseRowModel
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		TArray<FDatabaseColumnModel> DatabaseColumnModels;
};