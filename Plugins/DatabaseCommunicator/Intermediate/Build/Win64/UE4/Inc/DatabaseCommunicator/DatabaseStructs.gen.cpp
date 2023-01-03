// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatabaseCommunicator/Classes/DatabaseStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseStructs() {}
// Cross Module References
	DATABASECOMMUNICATOR_API UEnum* Z_Construct_UEnum_DatabaseCommunicator_EEncodingType();
	UPackage* Z_Construct_UPackage__Script_DatabaseCommunicator();
	DATABASECOMMUNICATOR_API UEnum* Z_Construct_UEnum_DatabaseCommunicator_EDatabaseColumnType();
	DATABASECOMMUNICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FDatabaseRowModel();
	DATABASECOMMUNICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FDatabaseColumnModel();
	DATABASECOMMUNICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultStruct();
	DATABASECOMMUNICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRowStruct();
	DATABASECOMMUNICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultColumnStruct();
// End Cross Module References
	static UEnum* EEncodingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatabaseCommunicator_EEncodingType, Z_Construct_UPackage__Script_DatabaseCommunicator(), TEXT("EEncodingType"));
		}
		return Singleton;
	}
	template<> DATABASECOMMUNICATOR_API UEnum* StaticEnum<EEncodingType>()
	{
		return EEncodingType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEncodingType(EEncodingType_StaticEnum, TEXT("/Script/DatabaseCommunicator"), TEXT("EEncodingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatabaseCommunicator_EEncodingType_Hash() { return 4143925505U; }
	UEnum* Z_Construct_UEnum_DatabaseCommunicator_EEncodingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatabaseCommunicator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEncodingType"), 0, Get_Z_Construct_UEnum_DatabaseCommunicator_EEncodingType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEncodingType::Utf16", (int64)EEncodingType::Utf16 },
				{ "EEncodingType::Utf8", (int64)EEncodingType::Utf8 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
				{ "Utf16.Name", "EEncodingType::Utf16" },
				{ "Utf8.Name", "EEncodingType::Utf8" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
				nullptr,
				"EEncodingType",
				"EEncodingType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDatabaseColumnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatabaseCommunicator_EDatabaseColumnType, Z_Construct_UPackage__Script_DatabaseCommunicator(), TEXT("EDatabaseColumnType"));
		}
		return Singleton;
	}
	template<> DATABASECOMMUNICATOR_API UEnum* StaticEnum<EDatabaseColumnType>()
	{
		return EDatabaseColumnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatabaseColumnType(EDatabaseColumnType_StaticEnum, TEXT("/Script/DatabaseCommunicator"), TEXT("EDatabaseColumnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatabaseCommunicator_EDatabaseColumnType_Hash() { return 1750800943U; }
	UEnum* Z_Construct_UEnum_DatabaseCommunicator_EDatabaseColumnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatabaseCommunicator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatabaseColumnType"), 0, Get_Z_Construct_UEnum_DatabaseCommunicator_EDatabaseColumnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatabaseColumnType::Boolean", (int64)EDatabaseColumnType::Boolean },
				{ "EDatabaseColumnType::Byte", (int64)EDatabaseColumnType::Byte },
				{ "EDatabaseColumnType::Date", (int64)EDatabaseColumnType::Date },
				{ "EDatabaseColumnType::Float", (int64)EDatabaseColumnType::Float },
				{ "EDatabaseColumnType::Int", (int64)EDatabaseColumnType::Int },
				{ "EDatabaseColumnType::Int64", (int64)EDatabaseColumnType::Int64 },
				{ "EDatabaseColumnType::String", (int64)EDatabaseColumnType::String },
				{ "EDatabaseColumnType::Time", (int64)EDatabaseColumnType::Time },
				{ "EDatabaseColumnType::Timestamp", (int64)EDatabaseColumnType::Timestamp },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "EDatabaseColumnType::Boolean" },
				{ "Byte.Name", "EDatabaseColumnType::Byte" },
				{ "Date.Name", "EDatabaseColumnType::Date" },
				{ "Float.Name", "EDatabaseColumnType::Float" },
				{ "Int.Name", "EDatabaseColumnType::Int" },
				{ "Int64.Name", "EDatabaseColumnType::Int64" },
				{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
				{ "String.Name", "EDatabaseColumnType::String" },
				{ "Time.Name", "EDatabaseColumnType::Time" },
				{ "Timestamp.Name", "EDatabaseColumnType::Timestamp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
				nullptr,
				"EDatabaseColumnType",
				"EDatabaseColumnType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDatabaseRowModel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATABASECOMMUNICATOR_API uint32 Get_Z_Construct_UScriptStruct_FDatabaseRowModel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatabaseRowModel, Z_Construct_UPackage__Script_DatabaseCommunicator(), TEXT("DatabaseRowModel"), sizeof(FDatabaseRowModel), Get_Z_Construct_UScriptStruct_FDatabaseRowModel_Hash());
	}
	return Singleton;
}
template<> DATABASECOMMUNICATOR_API UScriptStruct* StaticStruct<FDatabaseRowModel>()
{
	return FDatabaseRowModel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatabaseRowModel(FDatabaseRowModel::StaticStruct, TEXT("/Script/DatabaseCommunicator"), TEXT("DatabaseRowModel"), false, nullptr, nullptr);
static struct FScriptStruct_DatabaseCommunicator_StaticRegisterNativesFDatabaseRowModel
{
	FScriptStruct_DatabaseCommunicator_StaticRegisterNativesFDatabaseRowModel()
	{
		UScriptStruct::DeferCppStructOps<FDatabaseRowModel>(FName(TEXT("DatabaseRowModel")));
	}
} ScriptStruct_DatabaseCommunicator_StaticRegisterNativesFDatabaseRowModel;
	struct Z_Construct_UScriptStruct_FDatabaseRowModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DatabaseColumnModels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseColumnModels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DatabaseColumnModels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Contains the DatabaseColumnModels which must be in order of the result table*/" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
		{ "ToolTip", "Contains the DatabaseColumnModels which must be in order of the result table" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatabaseRowModel>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::NewProp_DatabaseColumnModels_Inner = { "DatabaseColumnModels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDatabaseColumnModel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::NewProp_DatabaseColumnModels_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::NewProp_DatabaseColumnModels = { "DatabaseColumnModels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatabaseRowModel, DatabaseColumnModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::NewProp_DatabaseColumnModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::NewProp_DatabaseColumnModels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::NewProp_DatabaseColumnModels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::NewProp_DatabaseColumnModels,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
		nullptr,
		&NewStructOps,
		"DatabaseRowModel",
		sizeof(FDatabaseRowModel),
		alignof(FDatabaseRowModel),
		Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatabaseRowModel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatabaseRowModel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatabaseCommunicator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatabaseRowModel"), sizeof(FDatabaseRowModel), Get_Z_Construct_UScriptStruct_FDatabaseRowModel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatabaseRowModel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatabaseRowModel_Hash() { return 3564636208U; }
class UScriptStruct* FDatabaseColumnModel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATABASECOMMUNICATOR_API uint32 Get_Z_Construct_UScriptStruct_FDatabaseColumnModel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatabaseColumnModel, Z_Construct_UPackage__Script_DatabaseCommunicator(), TEXT("DatabaseColumnModel"), sizeof(FDatabaseColumnModel), Get_Z_Construct_UScriptStruct_FDatabaseColumnModel_Hash());
	}
	return Singleton;
}
template<> DATABASECOMMUNICATOR_API UScriptStruct* StaticStruct<FDatabaseColumnModel>()
{
	return FDatabaseColumnModel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatabaseColumnModel(FDatabaseColumnModel::StaticStruct, TEXT("/Script/DatabaseCommunicator"), TEXT("DatabaseColumnModel"), false, nullptr, nullptr);
static struct FScriptStruct_DatabaseCommunicator_StaticRegisterNativesFDatabaseColumnModel
{
	FScriptStruct_DatabaseCommunicator_StaticRegisterNativesFDatabaseColumnModel()
	{
		UScriptStruct::DeferCppStructOps<FDatabaseColumnModel>(FName(TEXT("DatabaseColumnModel")));
	}
} ScriptStruct_DatabaseCommunicator_StaticRegisterNativesFDatabaseColumnModel;
	struct Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColumnType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColumnType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StringEncodingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringEncodingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StringEncodingType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Required to allocate memory and set type of the result values*/" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
		{ "ToolTip", "Required to allocate memory and set type of the result values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatabaseColumnModel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatabaseColumnModel, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnType_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnType = { "ColumnType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatabaseColumnModel, ColumnType), Z_Construct_UEnum_DatabaseCommunicator_EDatabaseColumnType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_StringEncodingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_StringEncodingType_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
		{ "ToolTip", "Only used for strings. Blueprint FStrings are Utf16, if your data needs to be converted with UTF8_TO_TCHAR() set this to true. If youre seeing ? marks also check your windows region settings. For example chinese characters will show as ? marks if you don't have your language set to chinese or use the beta UNICODE option for world wide language support." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_StringEncodingType = { "StringEncodingType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatabaseColumnModel, StringEncodingType), Z_Construct_UEnum_DatabaseCommunicator_EEncodingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_StringEncodingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_StringEncodingType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_ColumnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_StringEncodingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::NewProp_StringEncodingType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
		nullptr,
		&NewStructOps,
		"DatabaseColumnModel",
		sizeof(FDatabaseColumnModel),
		alignof(FDatabaseColumnModel),
		Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatabaseColumnModel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatabaseColumnModel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatabaseCommunicator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatabaseColumnModel"), sizeof(FDatabaseColumnModel), Get_Z_Construct_UScriptStruct_FDatabaseColumnModel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatabaseColumnModel_Hash() { return 70904014U; }
class UScriptStruct* FQueryResultStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATABASECOMMUNICATOR_API uint32 Get_Z_Construct_UScriptStruct_FQueryResultStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueryResultStruct, Z_Construct_UPackage__Script_DatabaseCommunicator(), TEXT("QueryResultStruct"), sizeof(FQueryResultStruct), Get_Z_Construct_UScriptStruct_FQueryResultStruct_Hash());
	}
	return Singleton;
}
template<> DATABASECOMMUNICATOR_API UScriptStruct* StaticStruct<FQueryResultStruct>()
{
	return FQueryResultStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQueryResultStruct(FQueryResultStruct::StaticStruct, TEXT("/Script/DatabaseCommunicator"), TEXT("QueryResultStruct"), false, nullptr, nullptr);
static struct FScriptStruct_DatabaseCommunicator_StaticRegisterNativesFQueryResultStruct
{
	FScriptStruct_DatabaseCommunicator_StaticRegisterNativesFQueryResultStruct()
	{
		UScriptStruct::DeferCppStructOps<FQueryResultStruct>(FName(TEXT("QueryResultStruct")));
	}
} ScriptStruct_DatabaseCommunicator_StaticRegisterNativesFQueryResultStruct;
	struct Z_Construct_UScriptStruct_FQueryResultStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueryResultStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueryResultStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueryResultStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
		nullptr,
		&NewStructOps,
		"QueryResultStruct",
		sizeof(FQueryResultStruct),
		alignof(FQueryResultStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueryResultStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQueryResultStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatabaseCommunicator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QueryResultStruct"), sizeof(FQueryResultStruct), Get_Z_Construct_UScriptStruct_FQueryResultStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQueryResultStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQueryResultStruct_Hash() { return 2314130955U; }
class UScriptStruct* FQueryResultRowStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATABASECOMMUNICATOR_API uint32 Get_Z_Construct_UScriptStruct_FQueryResultRowStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueryResultRowStruct, Z_Construct_UPackage__Script_DatabaseCommunicator(), TEXT("QueryResultRowStruct"), sizeof(FQueryResultRowStruct), Get_Z_Construct_UScriptStruct_FQueryResultRowStruct_Hash());
	}
	return Singleton;
}
template<> DATABASECOMMUNICATOR_API UScriptStruct* StaticStruct<FQueryResultRowStruct>()
{
	return FQueryResultRowStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQueryResultRowStruct(FQueryResultRowStruct::StaticStruct, TEXT("/Script/DatabaseCommunicator"), TEXT("QueryResultRowStruct"), false, nullptr, nullptr);
static struct FScriptStruct_DatabaseCommunicator_StaticRegisterNativesFQueryResultRowStruct
{
	FScriptStruct_DatabaseCommunicator_StaticRegisterNativesFQueryResultRowStruct()
	{
		UScriptStruct::DeferCppStructOps<FQueryResultRowStruct>(FName(TEXT("QueryResultRowStruct")));
	}
} ScriptStruct_DatabaseCommunicator_StaticRegisterNativesFQueryResultRowStruct;
	struct Z_Construct_UScriptStruct_FQueryResultRowStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRowStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueryResultRowStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueryResultRowStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueryResultRowStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
		nullptr,
		&NewStructOps,
		"QueryResultRowStruct",
		sizeof(FQueryResultRowStruct),
		alignof(FQueryResultRowStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultRowStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRowStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRowStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQueryResultRowStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatabaseCommunicator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QueryResultRowStruct"), sizeof(FQueryResultRowStruct), Get_Z_Construct_UScriptStruct_FQueryResultRowStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQueryResultRowStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQueryResultRowStruct_Hash() { return 3510887404U; }
class UScriptStruct* FQueryResultColumnStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATABASECOMMUNICATOR_API uint32 Get_Z_Construct_UScriptStruct_FQueryResultColumnStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueryResultColumnStruct, Z_Construct_UPackage__Script_DatabaseCommunicator(), TEXT("QueryResultColumnStruct"), sizeof(FQueryResultColumnStruct), Get_Z_Construct_UScriptStruct_FQueryResultColumnStruct_Hash());
	}
	return Singleton;
}
template<> DATABASECOMMUNICATOR_API UScriptStruct* StaticStruct<FQueryResultColumnStruct>()
{
	return FQueryResultColumnStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQueryResultColumnStruct(FQueryResultColumnStruct::StaticStruct, TEXT("/Script/DatabaseCommunicator"), TEXT("QueryResultColumnStruct"), false, nullptr, nullptr);
static struct FScriptStruct_DatabaseCommunicator_StaticRegisterNativesFQueryResultColumnStruct
{
	FScriptStruct_DatabaseCommunicator_StaticRegisterNativesFQueryResultColumnStruct()
	{
		UScriptStruct::DeferCppStructOps<FQueryResultColumnStruct>(FName(TEXT("QueryResultColumnStruct")));
	}
} ScriptStruct_DatabaseCommunicator_StaticRegisterNativesFQueryResultColumnStruct;
	struct Z_Construct_UScriptStruct_FQueryResultColumnStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultColumnStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**Structs are used in the query task because UObjects are not thread safe*/" },
		{ "ModuleRelativePath", "Classes/DatabaseStructs.h" },
		{ "ToolTip", "Structs are used in the query task because UObjects are not thread safe" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueryResultColumnStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueryResultColumnStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueryResultColumnStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
		nullptr,
		&NewStructOps,
		"QueryResultColumnStruct",
		sizeof(FQueryResultColumnStruct),
		alignof(FQueryResultColumnStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultColumnStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultColumnStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueryResultColumnStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQueryResultColumnStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatabaseCommunicator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QueryResultColumnStruct"), sizeof(FQueryResultColumnStruct), Get_Z_Construct_UScriptStruct_FQueryResultColumnStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQueryResultColumnStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQueryResultColumnStruct_Hash() { return 2554583470U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
