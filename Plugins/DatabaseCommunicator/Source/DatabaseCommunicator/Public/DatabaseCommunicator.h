//Copyright 2021 John Poole. All Rights Reserved.
#pragma once 
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FDatabaseCommunicator : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	//static inline FDatabaseCommunicator& Get()
	//{
	//	return FModuleManager::LoadModuleChecked< IDatabaseCommunicator >("DatabaseCommunicatorPlugin");
	//}
	//static inline bool IsAvailable()
	//{
	//	return FModuleManager::Get().IsModuleLoaded("DatabaseCommunicatorPlugin");
	//}
};
