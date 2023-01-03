//Copyright 2021 John Poole. All Rights Reserved.
#include "DatabaseQueryResultColumn.h"
#include "DatabaseCommunicatorPrivatePCH.h"

//Base Column
UResultColumn::UResultColumn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

//Bool Column
UDatabaseBoolColumn::UDatabaseBoolColumn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

//Byte Column
UDatabaseByteColumn::UDatabaseByteColumn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

//Date Column
UDatabaseDateColumn::UDatabaseDateColumn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

//Float Column
UDatabaseFloatColumn::UDatabaseFloatColumn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

//Int Column
UDatabaseIntColumn::UDatabaseIntColumn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

//Int64 Column
UDatabaseInt64Column::UDatabaseInt64Column(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

//String Column
UDatabaseStringColumn::UDatabaseStringColumn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

//Time Column
UDatabaseTimeColumn::UDatabaseTimeColumn(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

FString UResultColumn::GetValueAsString()
{
	switch (ColumnType)
	{	
	case EDatabaseColumnType::Boolean:
	{
		return Cast<UDatabaseBoolColumn>(this)->BoolValue ? "True" : "False";
	}
	case EDatabaseColumnType::Byte:
	{
		return FString::Printf(TEXT("%d"), Cast<UDatabaseByteColumn>(this)->ByteValue);
	}
	case EDatabaseColumnType::Date:
	{
		return Cast<UDatabaseDateColumn>(this)->DateValue.ToString();
	}	
	case EDatabaseColumnType::Float:
	{
		return FString::SanitizeFloat(Cast<UDatabaseFloatColumn>(this)->FloatValue);
	}
	case EDatabaseColumnType::Int:
	{
		return FString::FromInt(Cast<UDatabaseIntColumn>(this)->IntValue);
	}
	case EDatabaseColumnType::Int64:
	{
		return FString::FromInt(Cast<UDatabaseInt64Column>(this)->Int64Value);
	}
	case EDatabaseColumnType::String:
	{
		return Cast<UDatabaseStringColumn>(this)->StringValue;
	}
	case EDatabaseColumnType::Time:
	{
		return Cast<UDatabaseTimeColumn>(this)->TimeValue.ToString();
	}
	default:
	{
	return "Switching on column type failed!";
	}
	}
}

