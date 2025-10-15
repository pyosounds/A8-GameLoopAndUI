// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaProject/Public/SlowingItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlowingItem() {}

// Begin Cross Module References
SPARTAPROJECT_API UClass* Z_Construct_UClass_ABaseItem();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ASlowingItem();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ASlowingItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaProject();
// End Cross Module References

// Begin Class ASlowingItem
void ASlowingItem::StaticRegisterNativesASlowingItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASlowingItem);
UClass* Z_Construct_UClass_ASlowingItem_NoRegister()
{
	return ASlowingItem::StaticClass();
}
struct Z_Construct_UClass_ASlowingItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SlowingItem.h" },
		{ "ModuleRelativePath", "Public/SlowingItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowingMultiplier_MetaData[] = {
		{ "Category", "Slowing" },
		{ "ModuleRelativePath", "Public/SlowingItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowingDuration_MetaData[] = {
		{ "Category", "Slowing" },
		{ "ModuleRelativePath", "Public/SlowingItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowingMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowingDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlowingItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlowingItem_Statics::NewProp_SlowingMultiplier = { "SlowingMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowingItem, SlowingMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowingMultiplier_MetaData), NewProp_SlowingMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlowingItem_Statics::NewProp_SlowingDuration = { "SlowingDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowingItem, SlowingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowingDuration_MetaData), NewProp_SlowingDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlowingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowingItem_Statics::NewProp_SlowingMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowingItem_Statics::NewProp_SlowingDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowingItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASlowingItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowingItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlowingItem_Statics::ClassParams = {
	&ASlowingItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASlowingItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASlowingItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowingItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlowingItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASlowingItem()
{
	if (!Z_Registration_Info_UClass_ASlowingItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlowingItem.OuterSingleton, Z_Construct_UClass_ASlowingItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASlowingItem.OuterSingleton;
}
template<> SPARTAPROJECT_API UClass* StaticClass<ASlowingItem>()
{
	return ASlowingItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASlowingItem);
ASlowingItem::~ASlowingItem() {}
// End Class ASlowingItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_SlowingItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASlowingItem, ASlowingItem::StaticClass, TEXT("ASlowingItem"), &Z_Registration_Info_UClass_ASlowingItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlowingItem), 3511787633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_SlowingItem_h_2643930630(TEXT("/Script/SpartaProject"),
	Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_SlowingItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_SlowingItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
