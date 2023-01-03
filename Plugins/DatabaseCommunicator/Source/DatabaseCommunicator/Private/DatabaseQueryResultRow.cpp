//Copyright 2021 John Poole. All Rights Reserved.
#include "DatabaseQueryResultRow.h"
#include "DatabaseCommunicatorPrivatePCH.h"

UResultRow::UResultRow(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

UResultColumn* UResultRow::GetColumnByName(FString ColumnName)
{
	for (int32 i = 0; i < ResultColumns.Num(); i++)
		if (ResultColumns[i]->ColumnName == ColumnName)
			return ResultColumns[i];
	UE_LOG(DatabaseCommunicatorLog, Error, TEXT("Couldnt get database query result column by name | %s" ), *ColumnName);
	return nullptr;
}