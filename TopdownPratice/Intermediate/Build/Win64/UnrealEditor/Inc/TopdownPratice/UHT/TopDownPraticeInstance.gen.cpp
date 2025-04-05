// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopdownPratice/TopDownPraticeInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownPraticeInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_UTopDownPraticeInstance();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_UTopDownPraticeInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopdownPratice();
// End Cross Module References

// Begin Class UTopDownPraticeInstance
void UTopDownPraticeInstance::StaticRegisterNativesUTopDownPraticeInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTopDownPraticeInstance);
UClass* Z_Construct_UClass_UTopDownPraticeInstance_NoRegister()
{
	return UTopDownPraticeInstance::StaticClass();
}
struct Z_Construct_UClass_UTopDownPraticeInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TopDownPraticeInstance.h" },
		{ "ModuleRelativePath", "TopDownPraticeInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTopDownPraticeInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTopDownPraticeInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TopdownPratice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownPraticeInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTopDownPraticeInstance_Statics::ClassParams = {
	&UTopDownPraticeInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownPraticeInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTopDownPraticeInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTopDownPraticeInstance()
{
	if (!Z_Registration_Info_UClass_UTopDownPraticeInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTopDownPraticeInstance.OuterSingleton, Z_Construct_UClass_UTopDownPraticeInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTopDownPraticeInstance.OuterSingleton;
}
template<> TOPDOWNPRATICE_API UClass* StaticClass<UTopDownPraticeInstance>()
{
	return UTopDownPraticeInstance::StaticClass();
}
UTopDownPraticeInstance::UTopDownPraticeInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTopDownPraticeInstance);
UTopDownPraticeInstance::~UTopDownPraticeInstance() {}
// End Class UTopDownPraticeInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownPraticeInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTopDownPraticeInstance, UTopDownPraticeInstance::StaticClass, TEXT("UTopDownPraticeInstance"), &Z_Registration_Info_UClass_UTopDownPraticeInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTopDownPraticeInstance), 1052937300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownPraticeInstance_h_3974087472(TEXT("/Script/TopdownPratice"),
	Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownPraticeInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownPraticeInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
