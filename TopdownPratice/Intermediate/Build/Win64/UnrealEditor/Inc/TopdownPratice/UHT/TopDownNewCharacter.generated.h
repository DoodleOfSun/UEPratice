// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TopDownNewCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNPRATICE_TopDownNewCharacter_generated_h
#error "TopDownNewCharacter.generated.h already included, missing '#pragma once' in TopDownNewCharacter.h"
#endif
#define TOPDOWNPRATICE_TopDownNewCharacter_generated_h

#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDieProcess); \
	DECLARE_FUNCTION(execHit); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execCanAttack); \
	DECLARE_FUNCTION(execIsKilled); \
	DECLARE_FUNCTION(execGetHealthPoints);


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownNewCharacter(); \
	friend struct Z_Construct_UClass_ATopDownNewCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownNewCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopdownPratice"), NO_API) \
	DECLARE_SERIALIZER(ATopDownNewCharacter)


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATopDownNewCharacter(ATopDownNewCharacter&&); \
	ATopDownNewCharacter(const ATopDownNewCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownNewCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownNewCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownNewCharacter) \
	NO_API virtual ~ATopDownNewCharacter();


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_11_PROLOG
#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNPRATICE_API UClass* StaticClass<class ATopDownNewCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_owner_Desktop_ProjectForUE_UEPratice_TopdownPratice_Source_TopdownPratice_TopDownNewCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
