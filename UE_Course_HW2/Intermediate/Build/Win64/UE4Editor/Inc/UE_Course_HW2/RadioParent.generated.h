// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_COURSE_HW2_RadioParent_generated_h
#error "RadioParent.generated.h already included, missing '#pragma once' in RadioParent.h"
#endif
#define UE_COURSE_HW2_RadioParent_generated_h

#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_SPARSE_DATA
#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_RPC_WRAPPERS \
	virtual void SetPaused_Implementation(bool paused); \
 \
	DECLARE_FUNCTION(execSetPaused);


#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetPaused_Implementation(bool paused); \
 \
	DECLARE_FUNCTION(execSetPaused);


#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_EVENT_PARMS \
	struct RadioParent_eventSetPaused_Parms \
	{ \
		bool paused; \
	};


#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_CALLBACK_WRAPPERS
#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARadioParent(); \
	friend struct Z_Construct_UClass_ARadioParent_Statics; \
public: \
	DECLARE_CLASS(ARadioParent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_Course_HW2"), NO_API) \
	DECLARE_SERIALIZER(ARadioParent)


#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARadioParent(); \
	friend struct Z_Construct_UClass_ARadioParent_Statics; \
public: \
	DECLARE_CLASS(ARadioParent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_Course_HW2"), NO_API) \
	DECLARE_SERIALIZER(ARadioParent)


#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARadioParent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARadioParent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARadioParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadioParent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARadioParent(ARadioParent&&); \
	NO_API ARadioParent(const ARadioParent&); \
public:


#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARadioParent(ARadioParent&&); \
	NO_API ARadioParent(const ARadioParent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARadioParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARadioParent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARadioParent)


#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_PRIVATE_PROPERTY_OFFSET
#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_10_PROLOG \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_EVENT_PARMS


#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_PRIVATE_PROPERTY_OFFSET \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_SPARSE_DATA \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_RPC_WRAPPERS \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_CALLBACK_WRAPPERS \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_INCLASS \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_PRIVATE_PROPERTY_OFFSET \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_SPARSE_DATA \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_CALLBACK_WRAPPERS \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_INCLASS_NO_PURE_DECLS \
	UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_COURSE_HW2_API UClass* StaticClass<class ARadioParent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_Course_HW2_Source_UE_Course_HW2_Public_RadioParent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
