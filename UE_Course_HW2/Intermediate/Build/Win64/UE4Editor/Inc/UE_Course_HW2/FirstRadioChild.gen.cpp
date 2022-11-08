// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Course_HW2/Public/FirstRadioChild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstRadioChild() {}
// Cross Module References
	UE_COURSE_HW2_API UClass* Z_Construct_UClass_AFirstRadioChild_NoRegister();
	UE_COURSE_HW2_API UClass* Z_Construct_UClass_AFirstRadioChild();
	UE_COURSE_HW2_API UClass* Z_Construct_UClass_ARadioParent();
	UPackage* Z_Construct_UPackage__Script_UE_Course_HW2();
// End Cross Module References
	void AFirstRadioChild::StaticRegisterNativesAFirstRadioChild()
	{
	}
	UClass* Z_Construct_UClass_AFirstRadioChild_NoRegister()
	{
		return AFirstRadioChild::StaticClass();
	}
	struct Z_Construct_UClass_AFirstRadioChild_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstRadioChild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARadioParent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Course_HW2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstRadioChild_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FirstRadioChild.h" },
		{ "ModuleRelativePath", "Public/FirstRadioChild.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstRadioChild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstRadioChild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstRadioChild_Statics::ClassParams = {
		&AFirstRadioChild::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstRadioChild_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstRadioChild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstRadioChild()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstRadioChild_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstRadioChild, 1124841689);
	template<> UE_COURSE_HW2_API UClass* StaticClass<AFirstRadioChild>()
	{
		return AFirstRadioChild::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstRadioChild(Z_Construct_UClass_AFirstRadioChild, &AFirstRadioChild::StaticClass, TEXT("/Script/UE_Course_HW2"), TEXT("AFirstRadioChild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstRadioChild);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
