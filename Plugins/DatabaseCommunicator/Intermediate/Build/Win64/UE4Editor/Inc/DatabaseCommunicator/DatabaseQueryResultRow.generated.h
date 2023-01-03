// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UResultColumn;
#ifdef DATABASECOMMUNICATOR_DatabaseQueryResultRow_generated_h
#error "DatabaseQueryResultRow.generated.h already included, missing '#pragma once' in DatabaseQueryResultRow.h"
#endif
#define DATABASECOMMUNICATOR_DatabaseQueryResultRow_generated_h

#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_SPARSE_DATA
#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetColumnByName);


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetColumnByName);


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResultRow(); \
	friend struct Z_Construct_UClass_UResultRow_Statics; \
public: \
	DECLARE_CLASS(UResultRow, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatabaseCommunicator"), NO_API) \
	DECLARE_SERIALIZER(UResultRow)


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUResultRow(); \
	friend struct Z_Construct_UClass_UResultRow_Statics; \
public: \
	DECLARE_CLASS(UResultRow, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatabaseCommunicator"), NO_API) \
	DECLARE_SERIALIZER(UResultRow)


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResultRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResultRow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResultRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResultRow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResultRow(UResultRow&&); \
	NO_API UResultRow(const UResultRow&); \
public:


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResultRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResultRow(UResultRow&&); \
	NO_API UResultRow(const UResultRow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResultRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResultRow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResultRow)


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_PRIVATE_PROPERTY_OFFSET
#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_7_PROLOG
#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_PRIVATE_PROPERTY_OFFSET \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_SPARSE_DATA \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_RPC_WRAPPERS \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_INCLASS \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_PRIVATE_PROPERTY_OFFSET \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_SPARSE_DATA \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_INCLASS_NO_PURE_DECLS \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ResultRow."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATABASECOMMUNICATOR_API UClass* StaticClass<class UResultRow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQueryResultRow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
