// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Test_2_init() {}
	CPP_TEST_2_API UFunction* Z_Construct_UDelegateFunction_CPP_Test_2_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CPP_Test_2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CPP_Test_2()
	{
		if (!Z_Registration_Info_UPackage__Script_CPP_Test_2.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CPP_Test_2_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CPP_Test_2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD4FE4EF4,
				0x37F3C88B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CPP_Test_2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CPP_Test_2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CPP_Test_2(Z_Construct_UPackage__Script_CPP_Test_2, TEXT("/Script/CPP_Test_2"), Z_Registration_Info_UPackage__Script_CPP_Test_2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD4FE4EF4, 0x37F3C88B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
