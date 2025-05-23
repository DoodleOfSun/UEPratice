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
TOPDOWNPRATICE_API UEnum* Z_Construct_UEnum_TopdownPratice_EPlayerState();
UPackage* Z_Construct_UPackage__Script_TopdownPratice();
// End Cross Module References

// Begin Enum EPlayerState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerState;
static UEnum* EPlayerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopdownPratice_EPlayerState, (UObject*)Z_Construct_UPackage__Script_TopdownPratice(), TEXT("EPlayerState"));
	}
	return Z_Registration_Info_UEnum_EPlayerState.OuterSingleton;
}
template<> TOPDOWNPRATICE_API UEnum* StaticEnum<EPlayerState>()
{
	return EPlayerState_StaticEnum();
}
struct Z_Construct_UEnum_TopdownPratice_EPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Comment", "/**\n * \n */" },
		{ "Attack.Name", "EPlayerState::Attack" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Die.Comment", "/**\n * \n */" },
		{ "Die.Name", "EPlayerState::Die" },
		{ "Hit.Comment", "/**\n * \n */" },
		{ "Hit.Name", "EPlayerState::Hit" },
		{ "Locomotion.Comment", "/**\n * \n */" },
		{ "Locomotion.Name", "EPlayerState::Locomotion" },
		{ "ModuleRelativePath", "NewAnimInstance.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerState::Locomotion", (int64)EPlayerState::Locomotion },
		{ "EPlayerState::Attack", (int64)EPlayerState::Attack },
		{ "EPlayerState::Hit", (int64)EPlayerState::Hit },
		{ "EPlayerState::Die", (int64)EPlayerState::Die },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopdownPratice_EPlayerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TopdownPratice,
	nullptr,
	"EPlayerState",
	"EPlayerState",
	Z_Construct_UEnum_TopdownPratice_EPlayerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TopdownPratice_EPlayerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TopdownPratice_EPlayerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TopdownPratice_EPlayerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TopdownPratice_EPlayerState()
{
	if (!Z_Registration_Info_UEnum_EPlayerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerState.InnerSingleton, Z_Construct_UEnum_TopdownPratice_EPlayerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerState.InnerSingleton;
}
// End Enum EPlayerState

// Begin Class UNewAnimInstance Function OnStateAnimationEnds
struct Z_Construct_UFunction_UNewAnimInstance_OnStateAnimationEnds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NewAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewAnimInstance_OnStateAnimationEnds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewAnimInstance, nullptr, "OnStateAnimationEnds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNewAnimInstance_OnStateAnimationEnds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNewAnimInstance_OnStateAnimationEnds_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNewAnimInstance_OnStateAnimationEnds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewAnimInstance_OnStateAnimationEnds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNewAnimInstance::execOnStateAnimationEnds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStateAnimationEnds();
	P_NATIVE_END;
}
// End Class UNewAnimInstance Function OnStateAnimationEnds

// Begin Class UNewAnimInstance
void UNewAnimInstance::StaticRegisterNativesUNewAnimInstance()
{
	UClass* Class = UNewAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnStateAnimationEnds", &UNewAnimInstance::execOnStateAnimationEnds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "NewAnimInstance.h" },
		{ "ModuleRelativePath", "NewAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "NewAnimInstance" },
		{ "ModuleRelativePath", "NewAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAttacking_MetaData[] = {
		{ "Category", "NewAnimInstance" },
		{ "ModuleRelativePath", "NewAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[] = {
		{ "Category", "NewAnimInstance" },
		{ "ModuleRelativePath", "NewAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_IsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAttacking;
	static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewAnimInstance_OnStateAnimationEnds, "OnStateAnimationEnds" }, // 2590600222
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNewAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNewAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UNewAnimInstance_Statics::NewProp_IsAttacking_SetBit(void* Obj)
{
	((UNewAnimInstance*)Obj)->IsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNewAnimInstance_Statics::NewProp_IsAttacking = { "IsAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNewAnimInstance), &Z_Construct_UClass_UNewAnimInstance_Statics::NewProp_IsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAttacking_MetaData), NewProp_IsAttacking_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNewAnimInstance_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNewAnimInstance_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNewAnimInstance, state), Z_Construct_UEnum_TopdownPratice_EPlayerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_state_MetaData), NewProp_state_MetaData) }; // 1405293573
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewAnimInstance_Statics::NewProp_IsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewAnimInstance_Statics::NewProp_state_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewAnimInstance_Statics::NewProp_state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewAnimInstance_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UNewAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNewAnimInstance_Statics::PropPointers),
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerState_StaticEnum, TEXT("EPlayerState"), &Z_Registration_Info_UEnum_EPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1405293573U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewAnimInstance, UNewAnimInstance::StaticClass, TEXT("UNewAnimInstance"), &Z_Registration_Info_UClass_UNewAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewAnimInstance), 1655308909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_1959409491(TEXT("/Script/TopdownPratice"),
	Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
