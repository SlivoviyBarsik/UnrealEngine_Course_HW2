// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Course_HW2/UE_Course_HW2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_Course_HW2GameMode() {}
// Cross Module References
	UE_COURSE_HW2_API UClass* Z_Construct_UClass_AUE_Course_HW2GameMode_NoRegister();
	UE_COURSE_HW2_API UClass* Z_Construct_UClass_AUE_Course_HW2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE_Course_HW2();
// End Cross Module References
	void AUE_Course_HW2GameMode::StaticRegisterNativesAUE_Course_HW2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AUE_Course_HW2GameMode_NoRegister()
	{
		return AUE_Course_HW2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE_Course_HW2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE_Course_HW2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Course_HW2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE_Course_HW2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE_Course_HW2GameMode.h" },
		{ "ModuleRelativePath", "UE_Course_HW2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE_Course_HW2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE_Course_HW2GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE_Course_HW2GameMode_Statics::ClassParams = {
		&AUE_Course_HW2GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE_Course_HW2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE_Course_HW2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE_Course_HW2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE_Course_HW2GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE_Course_HW2GameMode, 305353377);
	template<> UE_COURSE_HW2_API UClass* StaticClass<AUE_Course_HW2GameMode>()
	{
		return AUE_Course_HW2GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE_Course_HW2GameMode(Z_Construct_UClass_AUE_Course_HW2GameMode, &AUE_Course_HW2GameMode::StaticClass, TEXT("/Script/UE_Course_HW2"), TEXT("AUE_Course_HW2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_Course_HW2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
