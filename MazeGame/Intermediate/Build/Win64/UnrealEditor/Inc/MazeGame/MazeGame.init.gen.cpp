// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MazeGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MazeGame()
	{
		if (!Z_Registration_Info_UPackage__Script_MazeGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MazeGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7CCCFC6A,
				0xF2440C11,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MazeGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MazeGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MazeGame(Z_Construct_UPackage__Script_MazeGame, TEXT("/Script/MazeGame"), Z_Registration_Info_UPackage__Script_MazeGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7CCCFC6A, 0xF2440C11));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
