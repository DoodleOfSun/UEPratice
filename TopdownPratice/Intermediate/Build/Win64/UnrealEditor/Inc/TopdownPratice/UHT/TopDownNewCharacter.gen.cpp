// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopdownPratice/TopDownNewCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownNewCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_ATopDownNewCharacter();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_ATopDownNewCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopdownPratice();
// End Cross Module References

// Begin Class ATopDownNewCharacter Function CanAttack
struct Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics
{
	struct TopDownNewCharacter_eventCanAttack_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea | PlayerCharacter" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TopDownNewCharacter_eventCanAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TopDownNewCharacter_eventCanAttack_Parms), &Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownNewCharacter, nullptr, "CanAttack", nullptr, nullptr, Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::TopDownNewCharacter_eventCanAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::TopDownNewCharacter_eventCanAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATopDownNewCharacter_CanAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownNewCharacter_CanAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATopDownNewCharacter::execCanAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAttack();
	P_NATIVE_END;
}
// End Class ATopDownNewCharacter Function CanAttack

// Begin Class ATopDownNewCharacter Function GetHealthPoints
struct Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics
{
	struct TopDownNewCharacter_eventGetHealthPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea | PlayerCharacter" },
		{ "DisplayName", "Get HP" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopDownNewCharacter_eventGetHealthPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownNewCharacter, nullptr, "GetHealthPoints", nullptr, nullptr, Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::TopDownNewCharacter_eventGetHealthPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::TopDownNewCharacter_eventGetHealthPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATopDownNewCharacter::execGetHealthPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHealthPoints();
	P_NATIVE_END;
}
// End Class ATopDownNewCharacter Function GetHealthPoints

// Begin Class ATopDownNewCharacter Function IsKilled
struct Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics
{
	struct TopDownNewCharacter_eventIsKilled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea | PlayerCharacter" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TopDownNewCharacter_eventIsKilled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TopDownNewCharacter_eventIsKilled_Parms), &Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopDownNewCharacter, nullptr, "IsKilled", nullptr, nullptr, Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::TopDownNewCharacter_eventIsKilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::TopDownNewCharacter_eventIsKilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATopDownNewCharacter_IsKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownNewCharacter_IsKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATopDownNewCharacter::execIsKilled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsKilled();
	P_NATIVE_END;
}
// End Class ATopDownNewCharacter Function IsKilled

// Begin Class ATopDownNewCharacter
void ATopDownNewCharacter::StaticRegisterNativesATopDownNewCharacter()
{
	UClass* Class = ATopDownNewCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAttack", &ATopDownNewCharacter::execCanAttack },
		{ "GetHealthPoints", &ATopDownNewCharacter::execGetHealthPoints },
		{ "IsKilled", &ATopDownNewCharacter::execIsKilled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownNewCharacter);
UClass* Z_Construct_UClass_ATopDownNewCharacter_NoRegister()
{
	return ATopDownNewCharacter::StaticClass();
}
struct Z_Construct_UClass_ATopDownNewCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopDownNewCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[] = {
		{ "Category", "PlayerAvatar Params" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "PlayerAvatar Params" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armer_MetaData[] = {
		{ "Category", "PlayerAvatar Params" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "PlayerAvatar Params" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackInterval_MetaData[] = {
		{ "Category", "PlayerAvatar Params" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__springArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__cameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownNewCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HealthPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Armer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__springArmComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__cameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopDownNewCharacter_CanAttack, "CanAttack" }, // 4270625953
		{ &Z_Construct_UFunction_ATopDownNewCharacter_GetHealthPoints, "GetHealthPoints" }, // 3964121592
		{ &Z_Construct_UFunction_ATopDownNewCharacter_IsKilled, "IsKilled" }, // 2540048451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownNewCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownNewCharacter, HealthPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPoints_MetaData), NewProp_HealthPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownNewCharacter, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp_Armer = { "Armer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownNewCharacter, Armer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armer_MetaData), NewProp_Armer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownNewCharacter, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp_AttackInterval = { "AttackInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownNewCharacter, AttackInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackInterval_MetaData), NewProp_AttackInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp__springArmComponent = { "_springArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownNewCharacter, _springArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__springArmComponent_MetaData), NewProp__springArmComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp__cameraComponent = { "_cameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownNewCharacter, _cameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__cameraComponent_MetaData), NewProp__cameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownNewCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp_HealthPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp_Armer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp_AttackInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp__springArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownNewCharacter_Statics::NewProp__cameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownNewCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATopDownNewCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TopdownPratice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownNewCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownNewCharacter_Statics::ClassParams = {
	&ATopDownNewCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATopDownNewCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownNewCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownNewCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownNewCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATopDownNewCharacter()
{
	if (!Z_Registration_Info_UClass_ATopDownNewCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownNewCharacter.OuterSingleton, Z_Construct_UClass_ATopDownNewCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATopDownNewCharacter.OuterSingleton;
}
template<> TOPDOWNPRATICE_API UClass* StaticClass<ATopDownNewCharacter>()
{
	return ATopDownNewCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownNewCharacter);
ATopDownNewCharacter::~ATopDownNewCharacter() {}
// End Class ATopDownNewCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownNewCharacter, ATopDownNewCharacter::StaticClass, TEXT("ATopDownNewCharacter"), &Z_Registration_Info_UClass_ATopDownNewCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownNewCharacter), 3167953043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_3429925403(TEXT("/Script/TopdownPratice"),
	Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
