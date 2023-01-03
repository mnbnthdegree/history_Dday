//Copyright 2021 John Poole. All Rights Reserved.
#pragma once
#include "DatabaseQueryResultColumn.h"
#include "DatabaseQueryResultRow.generated.h"

//Row
UCLASS(BlueprintType, Blueprintable)
class DATABASECOMMUNICATOR_API UResultRow : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		TArray<UResultColumn*> ResultColumns;
	UFUNCTION(BlueprintPure, Category = "Database Communicator")
		UResultColumn* GetColumnByName(FString ColumnName);
};