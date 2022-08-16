// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGame/Public/Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}
// Cross Module References
	MAZEGAME_API UClass* Z_Construct_UClass_UDoor_NoRegister();
	MAZEGAME_API UClass* Z_Construct_UClass_UDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MazeGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	void UDoor::StaticRegisterNativesUDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoor);
	UClass* Z_Construct_UClass_UDoor_NoRegister()
	{
		return UDoor::StaticClass();
	}
	struct Z_Construct_UClass_UDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToRotate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToRotate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OpenCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoor_Statics::NewProp_DesiredRotation_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoor_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoor, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UDoor_Statics::NewProp_DesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoor_Statics::NewProp_DesiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoor_Statics::NewProp_TimeToRotate_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoor_Statics::NewProp_TimeToRotate = { "TimeToRotate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoor, TimeToRotate), METADATA_PARAMS(Z_Construct_UClass_UDoor_Statics::NewProp_TimeToRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoor_Statics::NewProp_TimeToRotate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoor_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoor_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoor, TriggerBox), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoor_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoor_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoor_Statics::NewProp_OpenCurve_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoor_Statics::NewProp_OpenCurve = { "OpenCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoor, OpenCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UDoor_Statics::NewProp_OpenCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoor_Statics::NewProp_OpenCurve_MetaData)) }; // 1196190759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoor_Statics::NewProp_DesiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoor_Statics::NewProp_TimeToRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoor_Statics::NewProp_TriggerBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoor_Statics::NewProp_OpenCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoor_Statics::ClassParams = {
		&UDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoor()
	{
		if (!Z_Registration_Info_UClass_UDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoor.OuterSingleton, Z_Construct_UClass_UDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoor.OuterSingleton;
	}
	template<> MAZEGAME_API UClass* StaticClass<UDoor>()
	{
		return UDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoor);
	struct Z_CompiledInDeferFile_FID_MazeGame_Source_MazeGame_Public_Door_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MazeGame_Source_MazeGame_Public_Door_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoor, UDoor::StaticClass, TEXT("UDoor"), &Z_Registration_Info_UClass_UDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoor), 2269564563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MazeGame_Source_MazeGame_Public_Door_h_855867046(TEXT("/Script/MazeGame"),
		Z_CompiledInDeferFile_FID_MazeGame_Source_MazeGame_Public_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MazeGame_Source_MazeGame_Public_Door_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
