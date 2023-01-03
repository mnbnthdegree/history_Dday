// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatabaseCommunicator/Classes/DatabaseQueryResultColumn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseQueryResultColumn() {}
// Cross Module References
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UResultColumn_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UResultColumn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DatabaseCommunicator();
	DATABASECOMMUNICATOR_API UEnum* Z_Construct_UEnum_DatabaseCommunicator_EDatabaseColumnType();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseBoolColumn_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseBoolColumn();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseByteColumn_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseByteColumn();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseDateColumn_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseDateColumn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseFloatColumn_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseFloatColumn();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseIntColumn_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseIntColumn();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseInt64Column_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseInt64Column();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseStringColumn_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseStringColumn();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseTimeColumn_NoRegister();
	DATABASECOMMUNICATOR_API UClass* Z_Construct_UClass_UDatabaseTimeColumn();
// End Cross Module References
	DEFINE_FUNCTION(UResultColumn::execGetValueAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValueAsString();
		P_NATIVE_END;
	}
	void UResultColumn::StaticRegisterNativesUResultColumn()
	{
		UClass* Class = UResultColumn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValueAsString", &UResultColumn::execGetValueAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics
	{
		struct ResultColumn_eventGetValueAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResultColumn_eventGetValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResultColumn, nullptr, "GetValueAsString", nullptr, nullptr, sizeof(ResultColumn_eventGetValueAsString_Parms), Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResultColumn_GetValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UResultColumn_GetValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UResultColumn_NoRegister()
	{
		return UResultColumn::StaticClass();
	}
	struct Z_Construct_UClass_UResultColumn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColumnType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColumnType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResultColumn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UResultColumn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UResultColumn_GetValueAsString, "GetValueAsString" }, // 1299163223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResultColumn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Base Column\n" },
		{ "IncludePath", "DatabaseQueryResultColumn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
		{ "ToolTip", "Base Column" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResultColumn, ColumnName), METADATA_PARAMS(Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnType_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnType = { "ColumnType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResultColumn, ColumnType), Z_Construct_UEnum_DatabaseCommunicator_EDatabaseColumnType, METADATA_PARAMS(Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResultColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResultColumn_Statics::NewProp_ColumnType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResultColumn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResultColumn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResultColumn_Statics::ClassParams = {
		&UResultColumn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UResultColumn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UResultColumn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResultColumn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResultColumn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResultColumn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResultColumn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResultColumn, 1509905737);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UResultColumn>()
	{
		return UResultColumn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResultColumn(Z_Construct_UClass_UResultColumn, &UResultColumn::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UResultColumn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResultColumn);
	void UDatabaseBoolColumn::StaticRegisterNativesUDatabaseBoolColumn()
	{
	}
	UClass* Z_Construct_UClass_UDatabaseBoolColumn_NoRegister()
	{
		return UDatabaseBoolColumn::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseBoolColumn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseBoolColumn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UResultColumn,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseBoolColumn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Bool Column\n" },
		{ "IncludePath", "DatabaseQueryResultColumn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
		{ "ToolTip", "Bool Column" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseBoolColumn_Statics::NewProp_BoolValue_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	void Z_Construct_UClass_UDatabaseBoolColumn_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((UDatabaseBoolColumn*)Obj)->BoolValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatabaseBoolColumn_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDatabaseBoolColumn), &Z_Construct_UClass_UDatabaseBoolColumn_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatabaseBoolColumn_Statics::NewProp_BoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseBoolColumn_Statics::NewProp_BoolValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseBoolColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseBoolColumn_Statics::NewProp_BoolValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseBoolColumn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseBoolColumn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseBoolColumn_Statics::ClassParams = {
		&UDatabaseBoolColumn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatabaseBoolColumn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseBoolColumn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseBoolColumn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseBoolColumn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseBoolColumn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseBoolColumn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseBoolColumn, 2551775377);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UDatabaseBoolColumn>()
	{
		return UDatabaseBoolColumn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseBoolColumn(Z_Construct_UClass_UDatabaseBoolColumn, &UDatabaseBoolColumn::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UDatabaseBoolColumn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseBoolColumn);
	void UDatabaseByteColumn::StaticRegisterNativesUDatabaseByteColumn()
	{
	}
	UClass* Z_Construct_UClass_UDatabaseByteColumn_NoRegister()
	{
		return UDatabaseByteColumn::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseByteColumn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByteValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseByteColumn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UResultColumn,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseByteColumn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Byte Column\n" },
		{ "IncludePath", "DatabaseQueryResultColumn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
		{ "ToolTip", "Byte Column" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseByteColumn_Statics::NewProp_ByteValue_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatabaseByteColumn_Statics::NewProp_ByteValue = { "ByteValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseByteColumn, ByteValue), nullptr, METADATA_PARAMS(Z_Construct_UClass_UDatabaseByteColumn_Statics::NewProp_ByteValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseByteColumn_Statics::NewProp_ByteValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseByteColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseByteColumn_Statics::NewProp_ByteValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseByteColumn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseByteColumn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseByteColumn_Statics::ClassParams = {
		&UDatabaseByteColumn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatabaseByteColumn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseByteColumn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseByteColumn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseByteColumn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseByteColumn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseByteColumn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseByteColumn, 1480862544);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UDatabaseByteColumn>()
	{
		return UDatabaseByteColumn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseByteColumn(Z_Construct_UClass_UDatabaseByteColumn, &UDatabaseByteColumn::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UDatabaseByteColumn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseByteColumn);
	void UDatabaseDateColumn::StaticRegisterNativesUDatabaseDateColumn()
	{
	}
	UClass* Z_Construct_UClass_UDatabaseDateColumn_NoRegister()
	{
		return UDatabaseDateColumn::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseDateColumn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseDateColumn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UResultColumn,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseDateColumn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Date Column\n" },
		{ "IncludePath", "DatabaseQueryResultColumn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
		{ "ToolTip", "Date Column" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseDateColumn_Statics::NewProp_DateValue_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatabaseDateColumn_Statics::NewProp_DateValue = { "DateValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseDateColumn, DateValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UDatabaseDateColumn_Statics::NewProp_DateValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseDateColumn_Statics::NewProp_DateValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseDateColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseDateColumn_Statics::NewProp_DateValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseDateColumn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseDateColumn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseDateColumn_Statics::ClassParams = {
		&UDatabaseDateColumn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatabaseDateColumn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseDateColumn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseDateColumn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseDateColumn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseDateColumn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseDateColumn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseDateColumn, 1166926789);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UDatabaseDateColumn>()
	{
		return UDatabaseDateColumn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseDateColumn(Z_Construct_UClass_UDatabaseDateColumn, &UDatabaseDateColumn::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UDatabaseDateColumn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseDateColumn);
	void UDatabaseFloatColumn::StaticRegisterNativesUDatabaseFloatColumn()
	{
	}
	UClass* Z_Construct_UClass_UDatabaseFloatColumn_NoRegister()
	{
		return UDatabaseFloatColumn::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseFloatColumn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseFloatColumn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UResultColumn,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseFloatColumn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Float Column\n" },
		{ "IncludePath", "DatabaseQueryResultColumn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
		{ "ToolTip", "Float Column" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseFloatColumn_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatabaseFloatColumn_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseFloatColumn, FloatValue), METADATA_PARAMS(Z_Construct_UClass_UDatabaseFloatColumn_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseFloatColumn_Statics::NewProp_FloatValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseFloatColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseFloatColumn_Statics::NewProp_FloatValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseFloatColumn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseFloatColumn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseFloatColumn_Statics::ClassParams = {
		&UDatabaseFloatColumn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatabaseFloatColumn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseFloatColumn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseFloatColumn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseFloatColumn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseFloatColumn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseFloatColumn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseFloatColumn, 1203243991);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UDatabaseFloatColumn>()
	{
		return UDatabaseFloatColumn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseFloatColumn(Z_Construct_UClass_UDatabaseFloatColumn, &UDatabaseFloatColumn::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UDatabaseFloatColumn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseFloatColumn);
	void UDatabaseIntColumn::StaticRegisterNativesUDatabaseIntColumn()
	{
	}
	UClass* Z_Construct_UClass_UDatabaseIntColumn_NoRegister()
	{
		return UDatabaseIntColumn::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseIntColumn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseIntColumn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UResultColumn,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseIntColumn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Int Column\n" },
		{ "IncludePath", "DatabaseQueryResultColumn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
		{ "ToolTip", "Int Column" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseIntColumn_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatabaseIntColumn_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseIntColumn, IntValue), METADATA_PARAMS(Z_Construct_UClass_UDatabaseIntColumn_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseIntColumn_Statics::NewProp_IntValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseIntColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseIntColumn_Statics::NewProp_IntValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseIntColumn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseIntColumn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseIntColumn_Statics::ClassParams = {
		&UDatabaseIntColumn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatabaseIntColumn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseIntColumn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseIntColumn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseIntColumn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseIntColumn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseIntColumn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseIntColumn, 3151241948);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UDatabaseIntColumn>()
	{
		return UDatabaseIntColumn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseIntColumn(Z_Construct_UClass_UDatabaseIntColumn, &UDatabaseIntColumn::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UDatabaseIntColumn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseIntColumn);
	void UDatabaseInt64Column::StaticRegisterNativesUDatabaseInt64Column()
	{
	}
	UClass* Z_Construct_UClass_UDatabaseInt64Column_NoRegister()
	{
		return UDatabaseInt64Column::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseInt64Column_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int64Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Int64Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseInt64Column_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UResultColumn,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseInt64Column_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Int 64 Column\n" },
		{ "IncludePath", "DatabaseQueryResultColumn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
		{ "ToolTip", "Int 64 Column" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseInt64Column_Statics::NewProp_Int64Value_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UDatabaseInt64Column_Statics::NewProp_Int64Value = { "Int64Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseInt64Column, Int64Value), METADATA_PARAMS(Z_Construct_UClass_UDatabaseInt64Column_Statics::NewProp_Int64Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseInt64Column_Statics::NewProp_Int64Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseInt64Column_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseInt64Column_Statics::NewProp_Int64Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseInt64Column_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseInt64Column>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseInt64Column_Statics::ClassParams = {
		&UDatabaseInt64Column::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatabaseInt64Column_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseInt64Column_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseInt64Column_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseInt64Column_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseInt64Column()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseInt64Column_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseInt64Column, 3130145752);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UDatabaseInt64Column>()
	{
		return UDatabaseInt64Column::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseInt64Column(Z_Construct_UClass_UDatabaseInt64Column, &UDatabaseInt64Column::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UDatabaseInt64Column"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseInt64Column);
	void UDatabaseStringColumn::StaticRegisterNativesUDatabaseStringColumn()
	{
	}
	UClass* Z_Construct_UClass_UDatabaseStringColumn_NoRegister()
	{
		return UDatabaseStringColumn::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseStringColumn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseStringColumn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UResultColumn,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseStringColumn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//String Column\n" },
		{ "IncludePath", "DatabaseQueryResultColumn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
		{ "ToolTip", "String Column" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseStringColumn_Statics::NewProp_StringValue_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatabaseStringColumn_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseStringColumn, StringValue), METADATA_PARAMS(Z_Construct_UClass_UDatabaseStringColumn_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseStringColumn_Statics::NewProp_StringValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseStringColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseStringColumn_Statics::NewProp_StringValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseStringColumn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseStringColumn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseStringColumn_Statics::ClassParams = {
		&UDatabaseStringColumn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatabaseStringColumn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseStringColumn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseStringColumn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseStringColumn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseStringColumn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseStringColumn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseStringColumn, 1648550144);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UDatabaseStringColumn>()
	{
		return UDatabaseStringColumn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseStringColumn(Z_Construct_UClass_UDatabaseStringColumn, &UDatabaseStringColumn::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UDatabaseStringColumn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseStringColumn);
	void UDatabaseTimeColumn::StaticRegisterNativesUDatabaseTimeColumn()
	{
	}
	UClass* Z_Construct_UClass_UDatabaseTimeColumn_NoRegister()
	{
		return UDatabaseTimeColumn::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseTimeColumn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseTimeColumn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UResultColumn,
		(UObject* (*)())Z_Construct_UPackage__Script_DatabaseCommunicator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseTimeColumn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Time Column\n" },
		{ "IncludePath", "DatabaseQueryResultColumn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
		{ "ToolTip", "Time Column" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseTimeColumn_Statics::NewProp_TimeValue_MetaData[] = {
		{ "Category", "Database Communicator" },
		{ "ModuleRelativePath", "Classes/DatabaseQueryResultColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatabaseTimeColumn_Statics::NewProp_TimeValue = { "TimeValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseTimeColumn, TimeValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UDatabaseTimeColumn_Statics::NewProp_TimeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseTimeColumn_Statics::NewProp_TimeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseTimeColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseTimeColumn_Statics::NewProp_TimeValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseTimeColumn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseTimeColumn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseTimeColumn_Statics::ClassParams = {
		&UDatabaseTimeColumn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatabaseTimeColumn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseTimeColumn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseTimeColumn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseTimeColumn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseTimeColumn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseTimeColumn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseTimeColumn, 1718195150);
	template<> DATABASECOMMUNICATOR_API UClass* StaticClass<UDatabaseTimeColumn>()
	{
		return UDatabaseTimeColumn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseTimeColumn(Z_Construct_UClass_UDatabaseTimeColumn, &UDatabaseTimeColumn::StaticClass, TEXT("/Script/DatabaseCommunicator"), TEXT("UDatabaseTimeColumn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseTimeColumn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
