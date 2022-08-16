// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEGAME_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define MAZEGAME_Door_generated_h

#define FID_MazeGame_Source_MazeGame_Public_Door_h_14_SPARSE_DATA
#define FID_MazeGame_Source_MazeGame_Public_Door_h_14_RPC_WRAPPERS
#define FID_MazeGame_Source_MazeGame_Public_Door_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MazeGame_Source_MazeGame_Public_Door_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoor(); \
	friend struct Z_Construct_UClass_UDoor_Statics; \
public: \
	DECLARE_CLASS(UDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGame"), NO_API) \
	DECLARE_SERIALIZER(UDoor)


#define FID_MazeGame_Source_MazeGame_Public_Door_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDoor(); \
	friend struct Z_Construct_UClass_UDoor_Statics; \
public: \
	DECLARE_CLASS(UDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGame"), NO_API) \
	DECLARE_SERIALIZER(UDoor)


#define FID_MazeGame_Source_MazeGame_Public_Door_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoor(UDoor&&); \
	NO_API UDoor(const UDoor&); \
public:


#define FID_MazeGame_Source_MazeGame_Public_Door_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoor(UDoor&&); \
	NO_API UDoor(const UDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoor)


#define FID_MazeGame_Source_MazeGame_Public_Door_h_11_PROLOG
#define FID_MazeGame_Source_MazeGame_Public_Door_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MazeGame_Source_MazeGame_Public_Door_h_14_SPARSE_DATA \
	FID_MazeGame_Source_MazeGame_Public_Door_h_14_RPC_WRAPPERS \
	FID_MazeGame_Source_MazeGame_Public_Door_h_14_INCLASS \
	FID_MazeGame_Source_MazeGame_Public_Door_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MazeGame_Source_MazeGame_Public_Door_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MazeGame_Source_MazeGame_Public_Door_h_14_SPARSE_DATA \
	FID_MazeGame_Source_MazeGame_Public_Door_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MazeGame_Source_MazeGame_Public_Door_h_14_INCLASS_NO_PURE_DECLS \
	FID_MazeGame_Source_MazeGame_Public_Door_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGAME_API UClass* StaticClass<class UDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MazeGame_Source_MazeGame_Public_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
