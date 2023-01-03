// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDatabaseQueryResult;
struct FQueryResultStruct;
struct FDatabaseRowModel;
class UDatabaseQuery;
#ifdef DATABASECOMMUNICATOR_DatabaseQuery_generated_h
#error "DatabaseQuery.generated.h already included, missing '#pragma once' in DatabaseQuery.h"
#endif
#define DATABASECOMMUNICATOR_DatabaseQuery_generated_h

#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_22_DELEGATE \
struct _Script_DatabaseCommunicator_eventQueryFinished_Parms \
{ \
	UDatabaseQueryResult* DatabaseQueryResult; \
}; \
static inline void FQueryFinished_DelegateWrapper(const FMulticastScriptDelegate& QueryFinished, UDatabaseQueryResult* DatabaseQueryResult) \
{ \
	_Script_DatabaseCommunicator_eventQueryFinished_Parms Parms; \
	Parms.DatabaseQueryResult=DatabaseQueryResult; \
	QueryFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_21_DELEGATE \
struct _Script_DatabaseCommunicator_eventQueryTaskDone_Parms \
{ \
	FQueryResultStruct Succeeded; \
}; \
static inline void FQueryTaskDone_DelegateWrapper(const FMulticastScriptDelegate& QueryTaskDone, FQueryResultStruct Succeeded) \
{ \
	_Script_DatabaseCommunicator_eventQueryTaskDone_Parms Parms; \
	Parms.Succeeded=Succeeded; \
	QueryTaskDone.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_SPARSE_DATA
#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueryTaskComplete); \
	DECLARE_FUNCTION(execExecuteQueryAsync); \
	DECLARE_FUNCTION(execConstructUQuery);


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueryTaskComplete); \
	DECLARE_FUNCTION(execExecuteQueryAsync); \
	DECLARE_FUNCTION(execConstructUQuery);


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatabaseQuery(); \
	friend struct Z_Construct_UClass_UDatabaseQuery_Statics; \
public: \
	DECLARE_CLASS(UDatabaseQuery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatabaseCommunicator"), NO_API) \
	DECLARE_SERIALIZER(UDatabaseQuery)


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUDatabaseQuery(); \
	friend struct Z_Construct_UClass_UDatabaseQuery_Statics; \
public: \
	DECLARE_CLASS(UDatabaseQuery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatabaseCommunicator"), NO_API) \
	DECLARE_SERIALIZER(UDatabaseQuery)


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabaseQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabaseQuery(UDatabaseQuery&&); \
	NO_API UDatabaseQuery(const UDatabaseQuery&); \
public:


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabaseQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabaseQuery(UDatabaseQuery&&); \
	NO_API UDatabaseQuery(const UDatabaseQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseQuery)


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_PRIVATE_PROPERTY_OFFSET
#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_42_PROLOG
#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_PRIVATE_PROPERTY_OFFSET \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_SPARSE_DATA \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_RPC_WRAPPERS \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_INCLASS \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_PRIVATE_PROPERTY_OFFSET \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_SPARSE_DATA \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_INCLASS_NO_PURE_DECLS \
	history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DatabaseQuery."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATABASECOMMUNICATOR_API UClass* StaticClass<class UDatabaseQuery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID history_mvm_DB_Plugins_DatabaseCommunicator_Source_DatabaseCommunicator_Classes_DatabaseQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
