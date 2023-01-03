// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatabaseCommunicator/Classes/DatabaseQueryResultRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseQueryResultRow() {}
// Cross Module References
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UResultRow_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UResultRow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DatabaseCommunicator();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UResultColumn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UResultRow::execGetColumnByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ColumnName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResultColumn**)Z_Param__Result=P_THIS->GetColumnByName(Z_Param_ColumnName);
		P_NATIVE_END;
	}
	void UResultRow::StaticRegisterNativesUResultRow()
	{
		UClass* Class = UResultRow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColumnByName", &UResultRow::execGetColumnByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UResultRow_GetColumnByName_Statics
	{
		struct ResultRow_eventGetColumnByName_Parms
		{
			FString ColumnName;
			UResultColumn* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResultRow_eventGetColumnByName_Parms, ColumnName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResultRow_eventGetColumnByName_Parms, ReturnValue), Z_Construct_UClass_UResultColumn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::NewProp_ColumnName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResultRow, nullptr, "GetColumnByName", nullptr, nullptr, sizeof(ResultRow_eventGetColumnByName_Parms), Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResultRow_GetColumnByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UResultRow_GetColumnByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UResultRow_NoRegister()
	{
		return UResultRow::StaticClass();
	}
	struct Z_Construct_UClass_UResultRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultColumns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultColumns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultColumns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResultRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UResultRow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UResultRow_GetColumnByName, "GetColumnByName" }, // 1872677610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResultRow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Row\n" },
		{ "IncludePath", "DatabaseQueryResultRow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultRow.h" },
		{ "ToolTip", "Row" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UResultRow_Statics::NewProp_ResultColumns_Inner = { "ResultColumns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UResultColumn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResultRow_Statics::NewProp_ResultColumns_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultRow.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UResultRow_Statics::NewProp_ResultColumns = { "ResultColumns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResultRow, ResultColumns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UResultRow_Statics::NewProp_ResultColumns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResultRow_Statics::NewProp_ResultColumns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResultRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResultRow_Statics::NewProp_ResultColumns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResultRow_Statics::NewProp_ResultColumns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResultRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResultRow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResultRow_Statics::ClassParams = {
		&UResultRow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UResultRow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UResultRow_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResultRow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResultRow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResultRow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResultRow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResultRow, 89683271);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UResultRow>()
	{
		return UResultRow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResultRow(Z_Construct_UClass_UResultRow, &UResultRow::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UResultRow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResultRow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
