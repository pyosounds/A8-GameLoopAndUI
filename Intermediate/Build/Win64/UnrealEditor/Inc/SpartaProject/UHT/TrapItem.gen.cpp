// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaProject/Public/TrapItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrapItem() {}

// Begin Cross Module References
SPARTAPROJECT_API UClass* Z_Construct_UClass_ABaseItem();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ATrapItem();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ATrapItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaProject();
// End Cross Module References

// Begin Class ATrapItem
void ATrapItem::StaticRegisterNativesATrapItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrapItem);
UClass* Z_Construct_UClass_ATrapItem_NoRegister()
{
	return ATrapItem::StaticClass();
}
struct Z_Construct_UClass_ATrapItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TrapItem.h" },
		{ "ModuleRelativePath", "Public/TrapItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrapItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATrapItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrapItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrapItem_Statics::ClassParams = {
	&ATrapItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrapItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrapItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATrapItem()
{
	if (!Z_Registration_Info_UClass_ATrapItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrapItem.OuterSingleton, Z_Construct_UClass_ATrapItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrapItem.OuterSingleton;
}
template<> SPARTAPROJECT_API UClass* StaticClass<ATrapItem>()
{
	return ATrapItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATrapItem);
ATrapItem::~ATrapItem() {}
// End Class ATrapItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_TrapItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrapItem, ATrapItem::StaticClass, TEXT("ATrapItem"), &Z_Registration_Info_UClass_ATrapItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrapItem), 3996094916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_TrapItem_h_346975427(TEXT("/Script/SpartaProject"),
	Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_TrapItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_TrapItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
