// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UEPRATICEPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AUEPRATICECharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UEPRATICE_UEPRATICEPickUpComponent_generated_h
#error "UEPRATICEPickUpComponent.generated.h already included, missing '#pragma once' in UEPRATICEPickUpComponent.h"
#endif
#define UEPRATICE_UEPRATICEPickUpComponent_generated_h

#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEPickUpComponent_h_12_DELEGATE \
UEPRATICE_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AUEPRATICECharacter* PickUpCharacter);


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUEPRATICEPickUpComponent(); \
	friend struct Z_Construct_UClass_UUEPRATICEPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UUEPRATICEPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEPRATICE"), NO_API) \
	DECLARE_SERIALIZER(UUEPRATICEPickUpComponent)


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUEPRATICEPickUpComponent(UUEPRATICEPickUpComponent&&); \
	UUEPRATICEPickUpComponent(const UUEPRATICEPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUEPRATICEPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUEPRATICEPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUEPRATICEPickUpComponent) \
	NO_API virtual ~UUEPRATICEPickUpComponent();


#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEPickUpComponent_h_14_PROLOG
#define FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPRATICE_API UClass* StaticClass<class UUEPRATICEPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_owner_Desktop_ProjectForUE_UEPratice_UEPRATICE_Source_UEPRATICE_UEPRATICEPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
