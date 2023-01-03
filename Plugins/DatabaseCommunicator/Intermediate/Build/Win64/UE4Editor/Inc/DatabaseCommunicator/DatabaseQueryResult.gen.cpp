// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatabaseCommunicator/Classes/DatabaseQueryResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseQueryResult() {}
// Cross Module References
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseQueryResult_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseQueryResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DatabaseCommunicator();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UResultRow_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDatabaseQueryResult::execPrintResultsTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintResultsTable();
		P_NATIVE_END;
	}
	void UDatabaseQueryResult::StaticRegisterNativesUDatabaseQueryResult()
	{
		UClass* Class = UDatabaseQueryResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintResultsTable", &UDatabaseQueryResult::execPrintResultsTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatabaseQueryResult_PrintResultsTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQueryResult_PrintResultsTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Database Communicator" },
		{ "Comment", "/** Hackish way to print out the result table to help with debugging */" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResult.h" },
		{ "ToolTip", "Hackish way to print out the result table to help with debugging" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQueryResult_PrintResultsTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQueryResult, nullptr, "PrintResultsTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQueryResult_PrintResultsTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQueryResult_PrintResultsTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQueryResult_PrintResultsTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQueryResult_PrintResultsTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDatabaseQueryResult_NoRegister()
	{
		return UDatabaseQueryResult::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseQueryResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Succeeded_MetaData[];
#endif
		static void NewProp_Succeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultRows_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultRows_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultRows;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseQueryResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatabaseQueryResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatabaseQueryResult_PrintResultsTable, "PrintResultsTable" }, // 864043187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQueryResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DatabaseQueryResult.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResult.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_Succeeded_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResult.h" },
	};
#endif
	void Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_Succeeded_SetBit(void* Obj)
	{
		((UDatabaseQueryResult*)Obj)->Succeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDatabaseQueryResult), &Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_Succeeded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_Succeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_Succeeded_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_ResultRows_Inner = { "ResultRows", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UResultRow_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_ResultRows_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_ResultRows = { "ResultRows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseQueryResult, ResultRows), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_ResultRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_ResultRows_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseQueryResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_Succeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_ResultRows_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQueryResult_Statics::NewProp_ResultRows,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseQueryResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseQueryResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseQueryResult_Statics::ClassParams = {
		&UDatabaseQueryResult::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDatabaseQueryResult_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQueryResult_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseQueryResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQueryResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseQueryResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseQueryResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseQueryResult, 2680395034);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UDatabaseQueryResult>()
	{
		return UDatabaseQueryResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseQueryResult(Z_Construct_UClass_UDatabaseQueryResult, &UDatabaseQueryResult::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UDatabaseQueryResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseQueryResult);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
