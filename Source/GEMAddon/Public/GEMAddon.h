// Copyright (C) 2023 owoDra

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FGEMAddonModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
