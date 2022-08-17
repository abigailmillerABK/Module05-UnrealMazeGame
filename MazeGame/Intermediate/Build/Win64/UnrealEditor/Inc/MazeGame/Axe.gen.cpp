// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGame/Public/Axe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxe() {}
// Cross Module References
	MAZEGAME_API UClass* Z_Construct_UClass_UAxe_NoRegister();
	MAZEGAME_API UClass* Z_Construct_UClass_UAxe();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MazeGame();
// End Cross Module References
	void UAxe::StaticRegisterNativesUAxe()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxe);
	UClass* Z_Construct_UClass_UAxe_NoRegister()
	{
		return UAxe::StaticClass();
	}
	struct Z_Construct_UClass_UAxe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Axe.h" },
		{ "ModuleRelativePath", "Public/Axe.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxe_Statics::ClassParams = {
		&UAxe::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAxe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxe()
	{
		if (!Z_Registration_Info_UClass_UAxe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxe.OuterSingleton, Z_Construct_UClass_UAxe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxe.OuterSingleton;
	}
	template<> MAZEGAME_API UClass* StaticClass<UAxe>()
	{
		return UAxe::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxe);
	struct Z_CompiledInDeferFile_FID_MazeGame_Source_MazeGame_Public_Axe_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MazeGame_Source_MazeGame_Public_Axe_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxe, UAxe::StaticClass, TEXT("UAxe"), &Z_Registration_Info_UClass_UAxe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxe), 2192704776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MazeGame_Source_MazeGame_Public_Axe_h_1251142682(TEXT("/Script/MazeGame"),
		Z_CompiledInDeferFile_FID_MazeGame_Source_MazeGame_Public_Axe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MazeGame_Source_MazeGame_Public_Axe_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
