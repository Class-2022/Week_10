// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Test_2/Sensor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSensor() {}
// Cross Module References
	CPP_TEST_2_API UClass* Z_Construct_UClass_ASensor();
	CPP_TEST_2_API UClass* Z_Construct_UClass_ASensor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPP_Test_2();
// End Cross Module References
	void ASensor::StaticRegisterNativesASensor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASensor);
	UClass* Z_Construct_UClass_ASensor_NoRegister()
	{
		return ASensor::StaticClass();
	}
	struct Z_Construct_UClass_ASensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Test_2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASensor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sensor.h" },
		{ "ModuleRelativePath", "Sensor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASensor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASensor_Statics::ClassParams = {
		&ASensor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASensor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASensor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASensor()
	{
		if (!Z_Registration_Info_UClass_ASensor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASensor.OuterSingleton, Z_Construct_UClass_ASensor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASensor.OuterSingleton;
	}
	template<> CPP_TEST_2_API UClass* StaticClass<ASensor>()
	{
		return ASensor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASensor);
	ASensor::~ASensor() {}
	struct Z_CompiledInDeferFile_FID_CPP_Test_2_Source_CPP_Test_2_Sensor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Test_2_Source_CPP_Test_2_Sensor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASensor, ASensor::StaticClass, TEXT("ASensor"), &Z_Registration_Info_UClass_ASensor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASensor), 417670027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Test_2_Source_CPP_Test_2_Sensor_h_2401306113(TEXT("/Script/CPP_Test_2"),
		Z_CompiledInDeferFile_FID_CPP_Test_2_Source_CPP_Test_2_Sensor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Test_2_Source_CPP_Test_2_Sensor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
