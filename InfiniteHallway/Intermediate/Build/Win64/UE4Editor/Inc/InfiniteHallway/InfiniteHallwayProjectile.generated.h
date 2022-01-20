// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef INFINITEHALLWAY_InfiniteHallwayProjectile_generated_h
#error "InfiniteHallwayProjectile.generated.h already included, missing '#pragma once' in InfiniteHallwayProjectile.h"
#endif
#define INFINITEHALLWAY_InfiniteHallwayProjectile_generated_h

#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_SPARSE_DATA
#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInfiniteHallwayProjectile(); \
	friend struct Z_Construct_UClass_AInfiniteHallwayProjectile_Statics; \
public: \
	DECLARE_CLASS(AInfiniteHallwayProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InfiniteHallway"), NO_API) \
	DECLARE_SERIALIZER(AInfiniteHallwayProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInfiniteHallwayProjectile(); \
	friend struct Z_Construct_UClass_AInfiniteHallwayProjectile_Statics; \
public: \
	DECLARE_CLASS(AInfiniteHallwayProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InfiniteHallway"), NO_API) \
	DECLARE_SERIALIZER(AInfiniteHallwayProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInfiniteHallwayProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInfiniteHallwayProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInfiniteHallwayProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInfiniteHallwayProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInfiniteHallwayProjectile(AInfiniteHallwayProjectile&&); \
	NO_API AInfiniteHallwayProjectile(const AInfiniteHallwayProjectile&); \
public:


#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInfiniteHallwayProjectile(AInfiniteHallwayProjectile&&); \
	NO_API AInfiniteHallwayProjectile(const AInfiniteHallwayProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInfiniteHallwayProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInfiniteHallwayProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInfiniteHallwayProjectile)


#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AInfiniteHallwayProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AInfiniteHallwayProjectile, ProjectileMovement); }


#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_12_PROLOG
#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_SPARSE_DATA \
	InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_RPC_WRAPPERS \
	InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_INCLASS \
	InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_SPARSE_DATA \
	InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_INCLASS_NO_PURE_DECLS \
	InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INFINITEHALLWAY_API UClass* StaticClass<class AInfiniteHallwayProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InfiniteHallway_Source_InfiniteHallway_InfiniteHallwayProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
