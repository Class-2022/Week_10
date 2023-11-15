// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Test_2/C_L_Point.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_L_Point() {}
// Cross Module References
	CPP_TEST_2_API UClass* Z_Construct_UClass_UC_L_Point();
	CPP_TEST_2_API UClass* Z_Construct_UClass_UC_L_Point_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CPP_Test_2();
// End Cross Module References
	void UC_L_Point::StaticRegisterNativesUC_L_Point()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_L_Point);
	UClass* Z_Construct_UClass_UC_L_Point_NoRegister()
	{
		return UC_L_Point::StaticClass();
	}
	struct Z_Construct_UClass_UC_L_Point_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_L_Point_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Test_2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_L_Point_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_L_Point_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "C_L_Point.h" },
		{ "ModuleRelativePath", "C_L_Point.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_L_Point_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_L_Point>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_L_Point_Statics::ClassParams = {
		&UC_L_Point::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC_L_Point_Statics::Class_MetaDataParams), Z_Construct_UClass_UC_L_Point_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UC_L_Point()
	{
		if (!Z_Registration_Info_UClass_UC_L_Point.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_L_Point.OuterSingleton, Z_Construct_UClass_UC_L_Point_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UC_L_Point.OuterSingleton;
	}
	template<> CPP_TEST_2_API UClass* StaticClass<UC_L_Point>()
	{
		return UC_L_Point::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_L_Point);
	UC_L_Point::~UC_L_Point() {}
	struct Z_CompiledInDeferFile_FID_CPP_Test_2_Source_CPP_Test_2_C_L_Point_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Test_2_Source_CPP_Test_2_C_L_Point_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UC_L_Point, UC_L_Point::StaticClass, TEXT("UC_L_Point"), &Z_Registration_Info_UClass_UC_L_Point, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_L_Point), 3309162978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Test_2_Source_CPP_Test_2_C_L_Point_h_3022053173(TEXT("/Script/CPP_Test_2"),
		Z_CompiledInDeferFile_FID_CPP_Test_2_Source_CPP_Test_2_C_L_Point_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Test_2_Source_CPP_Test_2_C_L_Point_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
