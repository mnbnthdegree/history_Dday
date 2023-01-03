//Copyright 2021 John Poole. All Rights Reserved.
#include "DatabaseQueryResult.h"
#include "DatabaseCommunicatorPrivatePCH.h"

//UDatabaseQueryResult
UDatabaseQueryResult::UDatabaseQueryResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}
void UDatabaseQueryResult::PrintResultsTable()
{
	if (ResultRows.Num() <= 0)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("DatabaseQueryResult-PrintResultsTable: No Query Results"));
	else
	{
		for (int32 i = ResultRows.Num() - 1; i > -1; i--)
		{
			FString RowString = FString::FromInt(i) + " | ";
			for (int32 j = 0; j < ResultRows[i]->ResultColumns.Num(); j++)
				RowString += " || " + ResultRows[i]->ResultColumns[j]->GetValueAsString();
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, *RowString);
		}
	}
	return;
}