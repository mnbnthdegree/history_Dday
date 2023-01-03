//Copyright 2021 John Poole. All Rights Reserved.
#pragma once
#include "DatabaseStructs.h"
#include "DatabaseQueryResultColumn.generated.h"

//Base Column
UCLASS(BlueprintType, Blueprintable)
class DATABASECOMMUNICATOR_API UResultColumn : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		FString ColumnName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		EDatabaseColumnType ColumnType;
	UFUNCTION(BlueprintPure, Category = "Database Communicator")
		virtual FString GetValueAsString();
};

//Bool Column
UCLASS(BlueprintType, Blueprintable)
class DATABASECOMMUNICATOR_API UDatabaseBoolColumn : public UResultColumn
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		bool BoolValue;
};

//Byte Column
UCLASS(BlueprintType, Blueprintable)
class DATABASECOMMUNICATOR_API UDatabaseByteColumn : public UResultColumn
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		uint8 ByteValue;
};

//Date Column
UCLASS(BlueprintType, Blueprintable)
class DATABASECOMMUNICATOR_API UDatabaseDateColumn : public UResultColumn
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		FDateTime DateValue;
};

//Float Column
UCLASS(BlueprintType, Blueprintable)
class DATABASECOMMUNICATOR_API UDatabaseFloatColumn : public UResultColumn
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		float FloatValue;
};

//Int Column
UCLASS(BlueprintType, Blueprintable)
class DATABASECOMMUNICATOR_API UDatabaseIntColumn : public UResultColumn
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		int32 IntValue;
};

//Int 64 Column
UCLASS(BlueprintType, Blueprintable)
class DATABASECOMMUNICATOR_API UDatabaseInt64Column : public UResultColumn
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		int64 Int64Value;
};

//String Column
UCLASS(BlueprintType, Blueprintable)
class DATABASECOMMUNICATOR_API UDatabaseStringColumn : public UResultColumn
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		FString StringValue;
};

//Time Column
UCLASS(BlueprintType, Blueprintable)
class DATABASECOMMUNICATOR_API UDatabaseTimeColumn : public UResultColumn
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		FDateTime TimeValue;	
};