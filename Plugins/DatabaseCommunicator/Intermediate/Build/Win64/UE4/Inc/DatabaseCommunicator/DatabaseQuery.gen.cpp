// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatabaseCommunicator/Classes/DatabaseQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseQuery() {}
// Cross Module References
	DATABASECOMMUNICATOR_API UFunction* Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DatabaseCommunicator();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseQueryResult_NoRegister();
	DATABASECOMMUNICATOR_API UFunction* Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature();
	DATABASECOMMUNICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultStruct();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseQuery_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseQuery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATABASECOMMUNICATOR_API UScriptStruct* Z_Construct_UScriptStruct_FDatabaseRowModel();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics
	{
		struct _Script_DatabaseCommunicator_eventQueryFinished_Parms
		{
			UDatabaseQueryResult* DatabaseQueryResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DatabaseQueryResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics::NewProp_DatabaseQueryResult = { "DatabaseQueryResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DatabaseCommunicator_eventQueryFinished_Parms, DatabaseQueryResult), Z_Construct_UClass_UDatabaseQueryResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics::NewProp_DatabaseQueryResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DatabaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DatabaseCommunicator, nullptr, "QueryFinished__DelegateSignature", nullptr, nullptr, sizeof(_Script_DatabaseCommunicator_eventQueryFinished_Parms), Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics
	{
		struct _Script_DatabaseCommunicator_eventQueryTaskDone_Parms
		{
			FQueryResultStruct Succeeded;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Succeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DatabaseCommunicator_eventQueryTaskDone_Parms, Succeeded), Z_Construct_UScriptStruct_FQueryResultStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics::NewProp_Succeeded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DatabaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DatabaseCommunicator, nullptr, "QueryTaskDone__DelegateSignature", nullptr, nullptr, sizeof(_Script_DatabaseCommunicator_eventQueryTaskDone_Parms), Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execQueryTaskComplete)
	{
		P_GET_STRUCT(FQueryResultStruct,Z_Param_QueryResultStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryTaskComplete(Z_Param_QueryResultStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execExecuteQueryAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OdbcConnectionString);
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlCommand);
		P_GET_STRUCT(FDatabaseRowModel,Z_Param_DatabaseRowModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteQueryAsync(Z_Param_OdbcConnectionString,Z_Param_SqlCommand,Z_Param_DatabaseRowModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execConstructUQuery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=UDatabaseQuery::ConstructUQuery();
		P_NATIVE_END;
	}
	void UDatabaseQuery::StaticRegisterNativesUDatabaseQuery()
	{
		UClass* Class = UDatabaseQuery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructUQuery", &UDatabaseQuery::execConstructUQuery },
			{ "ExecuteQueryAsync", &UDatabaseQuery::execExecuteQueryAsync },
			{ "QueryTaskComplete", &UDatabaseQuery::execQueryTaskComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics
	{
		struct DatabaseQuery_eventConstructUQuery_Parms
		{
			UDatabaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventConstructUQuery_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Database Communicator" },
		{ "DisplayName", "Construct Query" },
		{ "ModuleRelativePath", "Classes/DatabaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "ConstructUQuery", nullptr, nullptr, sizeof(DatabaseQuery_eventConstructUQuery_Parms), Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics
	{
		struct DatabaseQuery_eventExecuteQueryAsync_Parms
		{
			FString OdbcConnectionString;
			FString SqlCommand;
			FDatabaseRowModel DatabaseRowModel;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OdbcConnectionString;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SqlCommand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DatabaseRowModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::NewProp_OdbcConnectionString = { "OdbcConnectionString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventExecuteQueryAsync_Parms, OdbcConnectionString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::NewProp_SqlCommand = { "SqlCommand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventExecuteQueryAsync_Parms, SqlCommand), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::NewProp_DatabaseRowModel = { "DatabaseRowModel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventExecuteQueryAsync_Parms, DatabaseRowModel), Z_Construct_UScriptStruct_FDatabaseRowModel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::NewProp_OdbcConnectionString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::NewProp_SqlCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::NewProp_DatabaseRowModel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "ExecuteQueryAsync", nullptr, nullptr, sizeof(DatabaseQuery_eventExecuteQueryAsync_Parms), Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics
	{
		struct DatabaseQuery_eventQueryTaskComplete_Parms
		{
			FQueryResultStruct QueryResultStruct;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryResultStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics::NewProp_QueryResultStruct = { "QueryResultStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventQueryTaskComplete_Parms, QueryResultStruct), Z_Construct_UScriptStruct_FQueryResultStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics::NewProp_QueryResultStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DatabaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "QueryTaskComplete", nullptr, nullptr, sizeof(DatabaseQuery_eventQueryTaskComplete_Parms), Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDatabaseQuery_NoRegister()
	{
		return UDatabaseQuery::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseQueryResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DatabaseQueryResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryFinished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatabaseQuery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatabaseQuery_ConstructUQuery, "ConstructUQuery" }, // 483301389
		{ &Z_Construct_UFunction_UDatabaseQuery_ExecuteQueryAsync, "ExecuteQueryAsync" }, // 3013881022
		{ &Z_Construct_UFunction_UDatabaseQuery_QueryTaskComplete, "QueryTaskComplete" }, // 4083903526
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DatabaseQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQuery.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_DatabaseQueryResult_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_DatabaseQueryResult = { "DatabaseQueryResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseQuery, DatabaseQueryResult), Z_Construct_UClass_UDatabaseQueryResult_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_DatabaseQueryResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_DatabaseQueryResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnQueryFinished_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnQueryFinished = { "OnQueryFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseQuery, OnQueryFinished), Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnQueryFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnQueryFinished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_DatabaseQueryResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnQueryFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseQuery_Statics::ClassParams = {
		&UDatabaseQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDatabaseQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseQuery, 1522584212);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UDatabaseQuery>()
	{
		return UDatabaseQuery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseQuery(Z_Construct_UClass_UDatabaseQuery, &UDatabaseQuery::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UDatabaseQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
