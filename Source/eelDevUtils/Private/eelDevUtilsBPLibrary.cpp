// Copyright Epic Games, Inc. All Rights Reserved.

#include "eelDevUtilsBPLibrary.h"
#include "eelDevUtils.h"

UeelDevUtilsBPLibrary::UeelDevUtilsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UeelDevUtilsBPLibrary::RequestMacMicrophonePermissions()
{

	#if PLATFORM_APPLE
	switch ([AVCaptureDevice authorizationStatusForMediaType : AVMediaTypeAudio])
	{
	case AVAuthorizationStatusAuthorized: { break; }
	case AVAuthorizationStatusNotDetermined:
		{
			[AVCaptureDevice requestAccessForMediaType : AVMediaTypeAudio completionHandler : ^ (BOOL granted) {
			if (granted) {

			}
			}] ;
			return true;
		}
	case AVAuthorizationStatusDenied: {return false; }
	case AVAuthorizationStatusRestricted: { return false; }
	}
#endif
	return false;
}
