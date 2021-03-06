// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LABO103/SIS457LABO103GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIS457LABO103GameMode() {}
// Cross Module References
	SIS457LABO103_API UClass* Z_Construct_UClass_ASIS457LABO103GameMode_NoRegister();
	SIS457LABO103_API UClass* Z_Construct_UClass_ASIS457LABO103GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SIS457LABO103();
// End Cross Module References
	void ASIS457LABO103GameMode::StaticRegisterNativesASIS457LABO103GameMode()
	{
	}
	UClass* Z_Construct_UClass_ASIS457LABO103GameMode_NoRegister()
	{
		return ASIS457LABO103GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASIS457LABO103GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASIS457LABO103GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LABO103,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LABO103GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GameMode class to specify pawn and playercontroller */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SIS457LABO103GameMode.h" },
		{ "ModuleRelativePath", "SIS457LABO103GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASIS457LABO103GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASIS457LABO103GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASIS457LABO103GameMode_Statics::ClassParams = {
		&ASIS457LABO103GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASIS457LABO103GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LABO103GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASIS457LABO103GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASIS457LABO103GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASIS457LABO103GameMode, 4029354312);
	template<> SIS457LABO103_API UClass* StaticClass<ASIS457LABO103GameMode>()
	{
		return ASIS457LABO103GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASIS457LABO103GameMode(Z_Construct_UClass_ASIS457LABO103GameMode, &ASIS457LABO103GameMode::StaticClass, TEXT("/Script/SIS457LABO103"), TEXT("ASIS457LABO103GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASIS457LABO103GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
