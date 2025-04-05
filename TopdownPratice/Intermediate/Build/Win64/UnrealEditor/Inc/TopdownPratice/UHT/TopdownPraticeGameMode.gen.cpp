// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopdownPratice/TopdownPraticeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopdownPraticeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_ATopdownPraticeGameMode();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_ATopdownPraticeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopdownPratice();
// End Cross Module References

// Begin Class ATopdownPraticeGameMode
void ATopdownPraticeGameMode::StaticRegisterNativesATopdownPraticeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopdownPraticeGameMode);
UClass* Z_Construct_UClass_ATopdownPraticeGameMode_NoRegister()
{
	return ATopdownPraticeGameMode::StaticClass();
}
struct Z_Construct_UClass_ATopdownPraticeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TopdownPraticeGameMode.h" },
		{ "ModuleRelativePath", "TopdownPraticeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopdownPraticeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATopdownPraticeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TopdownPratice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownPraticeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopdownPraticeGameMode_Statics::ClassParams = {
	&ATopdownPraticeGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownPraticeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopdownPraticeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATopdownPraticeGameMode()
{
	if (!Z_Registration_Info_UClass_ATopdownPraticeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopdownPraticeGameMode.OuterSingleton, Z_Construct_UClass_ATopdownPraticeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATopdownPraticeGameMode.OuterSingleton;
}
template<> TOPDOWNPRATICE_API UClass* StaticClass<ATopdownPraticeGameMode>()
{
	return ATopdownPraticeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATopdownPraticeGameMode);
ATopdownPraticeGameMode::~ATopdownPraticeGameMode() {}
// End Class ATopdownPraticeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopdownPraticeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATopdownPraticeGameMode, ATopdownPraticeGameMode::StaticClass, TEXT("ATopdownPraticeGameMode"), &Z_Registration_Info_UClass_ATopdownPraticeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopdownPraticeGameMode), 1831322288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopdownPraticeGameMode_h_1601056116(TEXT("/Script/TopdownPratice"),
	Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopdownPraticeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopdownPraticeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
