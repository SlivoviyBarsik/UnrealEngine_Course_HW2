// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Course_HW2/Public/RadioParent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioParent() {}
// Cross Module References
	UE_COURSE_HW2_API UClass* Z_Construct_UClass_ARadioParent_NoRegister();
	UE_COURSE_HW2_API UClass* Z_Construct_UClass_ARadioParent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE_Course_HW2();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARadioParent::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_paused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused_Implementation(Z_Param_paused);
		P_NATIVE_END;
	}
	static FName NAME_ARadioParent_SetPaused = FName(TEXT("SetPaused"));
	void ARadioParent::SetPaused(bool paused)
	{
		RadioParent_eventSetPaused_Parms Parms;
		Parms.paused=paused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ARadioParent_SetPaused),&Parms);
	}
	void ARadioParent::StaticRegisterNativesARadioParent()
	{
		UClass* Class = ARadioParent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPaused", &ARadioParent::execSetPaused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARadioParent_SetPaused_Statics
	{
		static void NewProp_paused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_paused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARadioParent_SetPaused_Statics::NewProp_paused_SetBit(void* Obj)
	{
		((RadioParent_eventSetPaused_Parms*)Obj)->paused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARadioParent_SetPaused_Statics::NewProp_paused = { "paused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RadioParent_eventSetPaused_Parms), &Z_Construct_UFunction_ARadioParent_SetPaused_Statics::NewProp_paused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARadioParent_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARadioParent_SetPaused_Statics::NewProp_paused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadioParent_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RadioParent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadioParent_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadioParent, nullptr, "SetPaused", nullptr, nullptr, sizeof(RadioParent_eventSetPaused_Parms), Z_Construct_UFunction_ARadioParent_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadioParent_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadioParent_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadioParent_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadioParent_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARadioParent_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARadioParent_NoRegister()
	{
		return ARadioParent::StaticClass();
	}
	struct Z_Construct_UClass_ARadioParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Audio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARadioParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Course_HW2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARadioParent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARadioParent_SetPaused, "SetPaused" }, // 2339264020
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadioParent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RadioParent.h" },
		{ "ModuleRelativePath", "Public/RadioParent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadioParent_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RadioParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARadioParent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadioParent, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARadioParent_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadioParent_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadioParent_Statics::NewProp_SceneComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RadioParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARadioParent_Statics::NewProp_SceneComp = { "SceneComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadioParent, SceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARadioParent_Statics::NewProp_SceneComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadioParent_Statics::NewProp_SceneComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadioParent_Statics::NewProp_Audio_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RadioParent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARadioParent_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadioParent, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARadioParent_Statics::NewProp_Audio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadioParent_Statics::NewProp_Audio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARadioParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadioParent_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadioParent_Statics::NewProp_SceneComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadioParent_Statics::NewProp_Audio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARadioParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARadioParent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARadioParent_Statics::ClassParams = {
		&ARadioParent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARadioParent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARadioParent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARadioParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARadioParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARadioParent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARadioParent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARadioParent, 935727935);
	template<> UE_COURSE_HW2_API UClass* StaticClass<ARadioParent>()
	{
		return ARadioParent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARadioParent(Z_Construct_UClass_ARadioParent, &ARadioParent::StaticClass, TEXT("/Script/UE_Course_HW2"), TEXT("ARadioParent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadioParent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
