// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopdownPratice/DefenseTower.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefenseTower() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_ADefenseTower();
TOPDOWNPRATICE_API UClass* Z_Construct_UClass_ADefenseTower_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopdownPratice();
// End Cross Module References

// Begin Class ADefenseTower Function CanFire
struct Z_Construct_UFunction_ADefenseTower_CanFire_Statics
{
	struct DefenseTower_eventCanFire_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Defense Tower" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//check if the tower has been destroyed\n" },
#endif
		{ "ModuleRelativePath", "DefenseTower.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "check if the tower has been destroyed" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DefenseTower_eventCanFire_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DefenseTower_eventCanFire_Parms), &Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_CanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "CanFire", nullptr, nullptr, Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::DefenseTower_eventCanFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefenseTower_CanFire_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::DefenseTower_eventCanFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefenseTower_CanFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_CanFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefenseTower::execCanFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanFire();
	P_NATIVE_END;
}
// End Class ADefenseTower Function CanFire

// Begin Class ADefenseTower Function GetHealthPoints
struct Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics
{
	struct DefenseTower_eventGetHealthPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Defense Tower" },
		{ "DisplayName", "GetHP" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventGetHealthPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "GetHealthPoints", nullptr, nullptr, Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::DefenseTower_eventGetHealthPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::DefenseTower_eventGetHealthPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefenseTower_GetHealthPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefenseTower::execGetHealthPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHealthPoints();
	P_NATIVE_END;
}
// End Class ADefenseTower Function GetHealthPoints

// Begin Class ADefenseTower Function IsDestroyed
struct Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics
{
	struct DefenseTower_eventIsDestroyed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Defense Tower" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//get current life point\n" },
#endif
		{ "ModuleRelativePath", "DefenseTower.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "get current life point" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DefenseTower_eventIsDestroyed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DefenseTower_eventIsDestroyed_Parms), &Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "IsDestroyed", nullptr, nullptr, Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::DefenseTower_eventIsDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::DefenseTower_eventIsDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefenseTower_IsDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefenseTower::execIsDestroyed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDestroyed();
	P_NATIVE_END;
}
// End Class ADefenseTower Function IsDestroyed

// Begin Class ADefenseTower Function OnBeginOverlap
struct Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics
{
	struct DefenseTower_eventOnBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComponent;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventOnBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((DefenseTower_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DefenseTower_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::DefenseTower_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::DefenseTower_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefenseTower_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefenseTower::execOnBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ADefenseTower Function OnBeginOverlap

// Begin Class ADefenseTower Function OnEndOverlap
struct Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics
{
	struct DefenseTower_eventOnEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComponent;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventOnEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::DefenseTower_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::DefenseTower_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefenseTower_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefenseTower::execOnEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ADefenseTower Function OnEndOverlap

// Begin Class ADefenseTower Function OnMeshBeginOverlap
struct Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics
{
	struct DefenseTower_eventOnMeshBeginOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventOnMeshBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "OnMeshBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::DefenseTower_eventOnMeshBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::DefenseTower_eventOnMeshBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefenseTower::execOnMeshBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMeshBeginOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ADefenseTower Function OnMeshBeginOverlap

// Begin Class ADefenseTower
void ADefenseTower::StaticRegisterNativesADefenseTower()
{
	UClass* Class = ADefenseTower::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanFire", &ADefenseTower::execCanFire },
		{ "GetHealthPoints", &ADefenseTower::execGetHealthPoints },
		{ "IsDestroyed", &ADefenseTower::execIsDestroyed },
		{ "OnBeginOverlap", &ADefenseTower::execOnBeginOverlap },
		{ "OnEndOverlap", &ADefenseTower::execOnEndOverlap },
		{ "OnMeshBeginOverlap", &ADefenseTower::execOnMeshBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefenseTower);
UClass* Z_Construct_UClass_ADefenseTower_NoRegister()
{
	return ADefenseTower::StaticClass();
}
struct Z_Construct_UClass_ADefenseTower_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DefenseTower.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[] = {
		{ "Category", "Tower Params" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShellDefense_MetaData[] = {
		{ "Category", "Tower Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the tower's max health points\n" },
#endif
		{ "ModuleRelativePath", "DefenseTower.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the tower's max health points" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Tower Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the tower's shell defense value \n" },
#endif
		{ "ModuleRelativePath", "DefenseTower.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the tower's shell defense value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadInterval_MetaData[] = {
		{ "Category", "Tower Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the tower's attack range\n" },
#endif
		{ "ModuleRelativePath", "DefenseTower.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the tower's attack range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tower Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tower Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HealthPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShellDefense;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__SphereComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefenseTower_CanFire, "CanFire" }, // 1767751670
		{ &Z_Construct_UFunction_ADefenseTower_GetHealthPoints, "GetHealthPoints" }, // 3457809257
		{ &Z_Construct_UFunction_ADefenseTower_IsDestroyed, "IsDestroyed" }, // 1801607825
		{ &Z_Construct_UFunction_ADefenseTower_OnBeginOverlap, "OnBeginOverlap" }, // 3668121764
		{ &Z_Construct_UFunction_ADefenseTower_OnEndOverlap, "OnEndOverlap" }, // 93115991
		{ &Z_Construct_UFunction_ADefenseTower_OnMeshBeginOverlap, "OnMeshBeginOverlap" }, // 1762746353
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefenseTower>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, HealthPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPoints_MetaData), NewProp_HealthPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_ShellDefense = { "ShellDefense", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, ShellDefense), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShellDefense_MetaData), NewProp_ShellDefense_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_ReloadInterval = { "ReloadInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, ReloadInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadInterval_MetaData), NewProp_ReloadInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp__MeshComponent = { "_MeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, _MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__MeshComponent_MetaData), NewProp__MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp__SphereComponent = { "_SphereComponent", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, _SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__SphereComponent_MetaData), NewProp__SphereComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefenseTower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_HealthPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_ShellDefense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_ReloadInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp__MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp__SphereComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefenseTower_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TopdownPratice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefenseTower_Statics::ClassParams = {
	&ADefenseTower::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADefenseTower_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefenseTower_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefenseTower()
{
	if (!Z_Registration_Info_UClass_ADefenseTower.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefenseTower.OuterSingleton, Z_Construct_UClass_ADefenseTower_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefenseTower.OuterSingleton;
}
template<> TOPDOWNPRATICE_API UClass* StaticClass<ADefenseTower>()
{
	return ADefenseTower::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefenseTower);
ADefenseTower::~ADefenseTower() {}
// End Class ADefenseTower

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_DefenseTower_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefenseTower, ADefenseTower::StaticClass, TEXT("ADefenseTower"), &Z_Registration_Info_UClass_ADefenseTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefenseTower), 1617739741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_DefenseTower_h_1923432542(TEXT("/Script/TopdownPratice"),
	Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_DefenseTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_DefenseTower_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
