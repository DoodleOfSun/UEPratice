// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerAvatar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UEPRATICE_PlayerAvatar_generated_h
#error "PlayerAvatar.generated.h already included, missing '#pragma once' in PlayerAvatar.h"
#endif
#define UEPRATICE_PlayerAvatar_generated_h

#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_PlayerAvatar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanAttack); \
	DECLARE_FUNCTION(execIsKilled); \
	DECLARE_FUNCTION(execGetHealthPoints);


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_PlayerAvatar_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerAvatar(); \
	friend struct Z_Construct_UClass_APlayerAvatar_Statics; \
public: \
	DECLARE_CLASS(APlayerAvatar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEPRATICE"), NO_API) \
	DECLARE_SERIALIZER(APlayerAvatar)


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_PlayerAvatar_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerAvatar(APlayerAvatar&&); \
	APlayerAvatar(const APlayerAvatar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAvatar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerAvatar) \
	NO_API virtual ~APlayerAvatar();


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_PlayerAvatar_h_9_PROLOG
#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_PlayerAvatar_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_PlayerAvatar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_PlayerAvatar_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_PlayerAvatar_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPRATICE_API UClass* StaticClass<class APlayerAvatar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_PlayerAvatar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
