// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEPRATICE_init() {}
	UEPRATICE_API UFunction* Z_Construct_UDelegateFunction_UEPRATICE_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UEPRATICE;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UEPRATICE()
	{
		if (!Z_Registration_Info_UPackage__Script_UEPRATICE.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UEPRATICE_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UEPRATICE",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6F896030,
				0x6DE23D0F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UEPRATICE.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UEPRATICE.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UEPRATICE(Z_Construct_UPackage__Script_UEPRATICE, TEXT("/Script/UEPRATICE"), Z_Registration_Info_UPackage__Script_UEPRATICE, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6F896030, 0x6DE23D0F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
