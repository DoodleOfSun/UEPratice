// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopdownPratice/TopDownPraticeGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownPraticeGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_ATopDownPraticeGameStateBase();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_ATopDownPraticeGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopdownPratice();
// End Cross Module References

// Begin Class ATopDownPraticeGameStateBase
void ATopDownPraticeGameStateBase::StaticRegisterNativesATopDownPraticeGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownPraticeGameStateBase);
UClass* Z_Construct_UClass_ATopDownPraticeGameStateBase_NoRegister()
{
	return ATopDownPraticeGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ATopDownPraticeGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TopDownPraticeGameStateBase.h" },
		{ "ModuleRelativePath", "TopDownPraticeGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownPraticeGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATopDownPraticeGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TopdownPratice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPraticeGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownPraticeGameStateBase_Statics::ClassParams = {
	&ATopDownPraticeGameStateBase::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPraticeGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownPraticeGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATopDownPraticeGameStateBase()
{
	if (!Z_Registration_Info_UClass_ATopDownPraticeGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownPraticeGameStateBase.OuterSingleton, Z_Construct_UClass_ATopDownPraticeGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATopDownPraticeGameStateBase.OuterSingleton;
}
template<> TOPDOWNPRATICE_API UClass* StaticClass<ATopDownPraticeGameStateBase>()
{
	return ATopDownPraticeGameStateBase::StaticClass();
}
ATopDownPraticeGameStateBase::ATopDownPraticeGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownPraticeGameStateBase);
ATopDownPraticeGameStateBase::~ATopDownPraticeGameStateBase() {}
// End Class ATopDownPraticeGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownPraticeGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownPraticeGameStateBase, ATopDownPraticeGameStateBase::StaticClass, TEXT("ATopDownPraticeGameStateBase"), &Z_Registration_Info_UClass_ATopDownPraticeGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownPraticeGameStateBase), 370302402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownPraticeGameStateBase_h_3136923936(TEXT("/Script/TopdownPratice"),
	Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownPraticeGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownPraticeGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
