// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseCommunicator_init() {}
	DATABASECOMMUNICATOR_API UFunction* Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature();
	DATABASECOMMUNICATOR_API UFunction* Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DatabaseCommunicator()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryTaskDone__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DatabaseCommunicator_QueryFinished__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/DatabaseCommunicator",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x059CBA76,
				0xC9F104CF,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
