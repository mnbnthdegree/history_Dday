//Copyright 2021 John Poole. All Rights Reserved.
#pragma once
#include "DatabaseQueryResultRow.h"
#include "DatabaseQueryResult.generated.h"

UCLASS(Blueprintable)
class DATABASECOMMUNICATOR_API UDatabaseQueryResult : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		bool Succeeded;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Database Communicator")
		TArray<UResultRow*> ResultRows;
	/** Hackish way to print out the result table to help with debugging */
	UFUNCTION(BlueprintCallable, Category = "Database Communicator")
		void PrintResultsTable();
};
