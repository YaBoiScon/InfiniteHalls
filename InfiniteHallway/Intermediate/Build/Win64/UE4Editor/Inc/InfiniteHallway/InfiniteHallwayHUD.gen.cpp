// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InfiniteHallway/InfiniteHallwayHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfiniteHallwayHUD() {}
// Cross Module References
	INFINITEHALLWAY_API UClass* Z_Construct_UClass_AInfiniteHallwayHUD_NoRegister();
	INFINITEHALLWAY_API UClass* Z_Construct_UClass_AInfiniteHallwayHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_InfiniteHallway();
// End Cross Module References
	void AInfiniteHallwayHUD::StaticRegisterNativesAInfiniteHallwayHUD()
	{
	}
	UClass* Z_Construct_UClass_AInfiniteHallwayHUD_NoRegister()
	{
		return AInfiniteHallwayHUD::StaticClass();
	}
	struct Z_Construct_UClass_AInfiniteHallwayHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInfiniteHallwayHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteHallway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfiniteHallwayHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "InfiniteHallwayHUD.h" },
		{ "ModuleRelativePath", "InfiniteHallwayHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInfiniteHallwayHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInfiniteHallwayHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInfiniteHallwayHUD_Statics::ClassParams = {
		&AInfiniteHallwayHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInfiniteHallwayHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInfiniteHallwayHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInfiniteHallwayHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInfiniteHallwayHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInfiniteHallwayHUD, 1048400185);
	template<> INFINITEHALLWAY_API UClass* StaticClass<AInfiniteHallwayHUD>()
	{
		return AInfiniteHallwayHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInfiniteHallwayHUD(Z_Construct_UClass_AInfiniteHallwayHUD, &AInfiniteHallwayHUD::StaticClass, TEXT("/Script/InfiniteHallway"), TEXT("AInfiniteHallwayHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInfiniteHallwayHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
