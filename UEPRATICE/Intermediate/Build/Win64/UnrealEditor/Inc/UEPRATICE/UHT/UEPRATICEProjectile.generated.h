// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UEPRATICEProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UEPRATICE_UEPRATICEProjectile_generated_h
#error "UEPRATICEProjectile.generated.h already included, missing '#pragma once' in UEPRATICEProjectile.h"
#endif
#define UEPRATICE_UEPRATICEProjectile_generated_h

#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUEPRATICEProjectile(); \
	friend struct Z_Construct_UClass_AUEPRATICEProjectile_Statics; \
public: \
	DECLARE_CLASS(AUEPRATICEProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEPRATICE"), NO_API) \
	DECLARE_SERIALIZER(AUEPRATICEProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUEPRATICEProjectile(AUEPRATICEProjectile&&); \
	AUEPRATICEProjectile(const AUEPRATICEProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUEPRATICEProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUEPRATICEProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUEPRATICEProjectile) \
	NO_API virtual ~AUEPRATICEProjectile();


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEProjectile_h_12_PROLOG
#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPRATICE_API UClass* StaticClass<class AUEPRATICEProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
