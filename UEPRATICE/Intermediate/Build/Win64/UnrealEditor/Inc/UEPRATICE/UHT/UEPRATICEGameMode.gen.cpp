// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEPRATICE/UEPRATICEGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEPRATICEGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UEPRATICE_API UClass* Z_Construct_UClass_AUEPRATICEGameMode();
UEPRATICE_API UClass* Z_Construct_UClass_AUEPRATICEGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEPRATICE();
// End Cross Module References

// Begin Class AUEPRATICEGameMode
void AUEPRATICEGameMode::StaticRegisterNativesAUEPRATICEGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUEPRATICEGameMode);
UClass* Z_Construct_UClass_AUEPRATICEGameMode_NoRegister()
{
	return AUEPRATICEGameMode::StaticClass();
}
struct Z_Construct_UClass_AUEPRATICEGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UEPRATICEGameMode.h" },
		{ "ModuleRelativePath", "UEPRATICEGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEPRATICEGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUEPRATICEGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEPRATICE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUEPRATICEGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUEPRATICEGameMode_Statics::ClassParams = {
	&AUEPRATICEGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUEPRATICEGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUEPRATICEGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUEPRATICEGameMode()
{
	if (!Z_Registration_Info_UClass_AUEPRATICEGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUEPRATICEGameMode.OuterSingleton, Z_Construct_UClass_AUEPRATICEGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUEPRATICEGameMode.OuterSingleton;
}
template<> UEPRATICE_API UClass* StaticClass<AUEPRATICEGameMode>()
{
	return AUEPRATICEGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUEPRATICEGameMode);
AUEPRATICEGameMode::~AUEPRATICEGameMode() {}
// End Class AUEPRATICEGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUEPRATICEGameMode, AUEPRATICEGameMode::StaticClass, TEXT("AUEPRATICEGameMode"), &Z_Registration_Info_UClass_AUEPRATICEGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUEPRATICEGameMode), 3732890730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEGameMode_h_3442713853(TEXT("/Script/UEPRATICE"),
	Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
