// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "eelDevUtilsBPLibrary.generated.h"

#if PLATFORM_APPLE
#import <AVFoundation/AVFoundation.h>
#endif

UCLASS()
class UeelDevUtilsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static bool RequestMacMicrophonePermissions();
	
};
