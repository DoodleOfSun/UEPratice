// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopdownPratice/NewAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_UNewAnimInstance();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_UNewAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopdownPratice();
// End Cross Module References

// Begin Class UNewAnimInstance
void UNewAnimInstance::StaticRegisterNativesUNewAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewAnimInstance);
UClass* Z_Construct_UClass_UNewAnimInstance_NoRegister()
{
	return UNewAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UNewAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "NewAnimInstance.h" },
		{ "ModuleRelativePath", "NewAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNewAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TopdownPratice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewAnimInstance_Statics::ClassParams = {
	&UNewAnimInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNewAnimInstance()
{
	if (!Z_Registration_Info_UClass_UNewAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewAnimInstance.OuterSingleton, Z_Construct_UClass_UNewAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNewAnimInstance.OuterSingleton;
}
template<> TOPDOWNPRATICE_API UClass* StaticClass<UNewAnimInstance>()
{
	return UNewAnimInstance::StaticClass();
}
UNewAnimInstance::UNewAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNewAnimInstance);
UNewAnimInstance::~UNewAnimInstance() {}
// End Class UNewAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewAnimInstance, UNewAnimInstance::StaticClass, TEXT("UNewAnimInstance"), &Z_Registration_Info_UClass_UNewAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewAnimInstance), 2024743652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_2825504312(TEXT("/Script/TopdownPratice"),
	Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
