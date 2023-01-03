//Copyright 2021 John Poole. All Rights Reserved.
#include "DatabaseCommunicator.h"
#include "DatabaseCommunicatorPrivatePCH.h"

#define LOCTEXT_NAMESPACE "FDatabaseCommunicator"
void FDatabaseCommunicator::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FDatabaseCommunicator::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}
#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDatabaseCommunicator, DatabaseCommunicator)
DEFINE_LOG_CATEGORY(DatabaseCommunicatorLog);
