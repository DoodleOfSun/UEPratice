// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NewAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNPRATICE_NewAnimInstance_generated_h
#error "NewAnimInstance.generated.h already included, missing '#pragma once' in NewAnimInstance.h"
#endif
#define TOPDOWNPRATICE_NewAnimInstance_generated_h

#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnStateAnimationEnds);


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNewAnimInstance(); \
	friend struct Z_Construct_UClass_UNewAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UNewAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TopdownPratice"), NO_API) \
	DECLARE_SERIALIZER(UNewAnimInstance)


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNewAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNewAnimInstance(UNewAnimInstance&&); \
	UNewAnimInstance(const UNewAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNewAnimInstance) \
	NO_API virtual ~UNewAnimInstance();


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_23_PROLOG
#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNPRATICE_API UClass* StaticClass<class UNewAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_NewAnimInstance_h


#define FOREACH_ENUM_EPLAYERSTATE(op) \
	op(EPlayerState::Locomotion) \
	op(EPlayerState::Attack) \
	op(EPlayerState::Hit) \
	op(EPlayerState::Die) 

enum class EPlayerState : uint8;
template<> struct TIsUEnumClass<EPlayerState> { enum { Value = true }; };
template<> TOPDOWNPRATICE_API UEnum* StaticEnum<EPlayerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
