// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATABASECOMMUNICATOR_DatabaseStructs_generated_h
#error "DatabaseStructs.generated.h already included, missing '#pragma once' in DatabaseStructs.h"
#endif
#define DATABASECOMMUNICATOR_DatabaseStructs_generated_h

#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseStructs_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatabaseRowModel_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATABASECOMMUNICATOR_API UScriptStruct* StaticStruct<struct FDatabaseRowModel>();

#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseStructs_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatabaseColumnModel_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATABASECOMMUNICATOR_API UScriptStruct* StaticStruct<struct FDatabaseColumnModel>();

#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseStructs_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueryResultStruct_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATABASECOMMUNICATOR_API UScriptStruct* StaticStruct<struct FQueryResultStruct>();

#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseStructs_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueryResultRowStruct_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATABASECOMMUNICATOR_API UScriptStruct* StaticStruct<struct FQueryResultRowStruct>();

#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseStructs_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueryResultColumnStruct_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATABASECOMMUNICATOR_API UScriptStruct* StaticStruct<struct FQueryResultColumnStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseStructs_h


#define FOREACH_ENUM_EENCODINGTYPE(op) \
	op(EEncodingType::Utf16) \
	op(EEncodingType::Utf8) 

enum class EEncodingType : uint8;
template<> DATABASECOMMUNICATOR_API UEnum* StaticEnum<EEncodingType>();

#define FOREACH_ENUM_EDATABASECOLUMNTYPE(op) \
	op(EDatabaseColumnType::Boolean) \
	op(EDatabaseColumnType::Byte) \
	op(EDatabaseColumnType::Date) \
	op(EDatabaseColumnType::Float) \
	op(EDatabaseColumnType::Int) \
	op(EDatabaseColumnType::Int64) \
	op(EDatabaseColumnType::String) \
	op(EDatabaseColumnType::Time) \
	op(EDatabaseColumnType::Timestamp) 

enum class EDatabaseColumnType : uint8;
template<> DATABASECOMMUNICATOR_API UEnum* StaticEnum<EDatabaseColumnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
