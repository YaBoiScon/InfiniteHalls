// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InfiniteHallway/InfiniteHallwayGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfiniteHallwayGameMode() {}
// Cross Module References
	INFINITEHALLWAY_API UClass* Z_Construct_UClass_AInfiniteHallwayGameMode_NoRegister();
	INFINITEHALLWAY_API UClass* Z_Construct_UClass_AInfiniteHallwayGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InfiniteHallway();
// End Cross Module References
	void AInfiniteHallwayGameMode::StaticRegisterNativesAInfiniteHallwayGameMode()
	{
	}
	UClass* Z_Construct_UClass_AInfiniteHallwayGameMode_NoRegister()
	{
		return AInfiniteHallwayGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInfiniteHallwayGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInfiniteHallwayGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteHallway,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfiniteHallwayGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InfiniteHallwayGameMode.h" },
		{ "ModuleRelativePath", "InfiniteHallwayGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInfiniteHallwayGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInfiniteHallwayGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInfiniteHallwayGameMode_Statics::ClassParams = {
		&AInfiniteHallwayGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInfiniteHallwayGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInfiniteHallwayGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInfiniteHallwayGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInfiniteHallwayGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInfiniteHallwayGameMode, 1327359866);
	template<> INFINITEHALLWAY_API UClass* StaticClass<AInfiniteHallwayGameMode>()
	{
		return AInfiniteHallwayGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInfiniteHallwayGameMode(Z_Construct_UClass_AInfiniteHallwayGameMode, &AInfiniteHallwayGameMode::StaticClass, TEXT("/Script/InfiniteHallway"), TEXT("AInfiniteHallwayGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInfiniteHallwayGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
