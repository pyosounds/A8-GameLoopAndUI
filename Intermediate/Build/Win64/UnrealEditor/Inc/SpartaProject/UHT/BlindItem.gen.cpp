// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaProject/Public/BlindItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlindItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ABaseItem();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ABlindItem();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ABlindItem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaProject();
// End Cross Module References

// Begin Class ABlindItem Function RemoveBlindEffect
struct Z_Construct_UFunction_ABlindItem_RemoveBlindEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlindItem_RemoveBlindEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlindItem, nullptr, "RemoveBlindEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlindItem_RemoveBlindEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlindItem_RemoveBlindEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlindItem_RemoveBlindEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlindItem_RemoveBlindEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlindItem::execRemoveBlindEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBlindEffect();
	P_NATIVE_END;
}
// End Class ABlindItem Function RemoveBlindEffect

// Begin Class ABlindItem
void ABlindItem::StaticRegisterNativesABlindItem()
{
	UClass* Class = ABlindItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveBlindEffect", &ABlindItem::execRemoveBlindEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlindItem);
UClass* Z_Construct_UClass_ABlindItem_NoRegister()
{
	return ABlindItem::StaticClass();
}
struct Z_Construct_UClass_ABlindItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlindItem.h" },
		{ "ModuleRelativePath", "Public/BlindItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlindWidgetClass_MetaData[] = {
		{ "Category", "Blind" },
		{ "ModuleRelativePath", "Public/BlindItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlindDuration_MetaData[] = {
		{ "Category", "Blind" },
		{ "ModuleRelativePath", "Public/BlindItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlindWidgetInstance_MetaData[] = {
		{ "Category", "Blind" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlindItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BlindWidgetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlindDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlindWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlindItem_RemoveBlindEffect, "RemoveBlindEffect" }, // 2342581100
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlindItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlindItem_Statics::NewProp_BlindWidgetClass = { "BlindWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlindItem, BlindWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlindWidgetClass_MetaData), NewProp_BlindWidgetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlindItem_Statics::NewProp_BlindDuration = { "BlindDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlindItem, BlindDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlindDuration_MetaData), NewProp_BlindDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlindItem_Statics::NewProp_BlindWidgetInstance = { "BlindWidgetInstance", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlindItem, BlindWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlindWidgetInstance_MetaData), NewProp_BlindWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlindItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlindItem_Statics::NewProp_BlindWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlindItem_Statics::NewProp_BlindDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlindItem_Statics::NewProp_BlindWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlindItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlindItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlindItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlindItem_Statics::ClassParams = {
	&ABlindItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlindItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlindItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlindItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlindItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlindItem()
{
	if (!Z_Registration_Info_UClass_ABlindItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlindItem.OuterSingleton, Z_Construct_UClass_ABlindItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlindItem.OuterSingleton;
}
template<> SPARTAPROJECT_API UClass* StaticClass<ABlindItem>()
{
	return ABlindItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlindItem);
ABlindItem::~ABlindItem() {}
// End Class ABlindItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_BlindItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlindItem, ABlindItem::StaticClass, TEXT("ABlindItem"), &Z_Registration_Info_UClass_ABlindItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlindItem), 3319784437U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_BlindItem_h_226919090(TEXT("/Script/SpartaProject"),
	Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_BlindItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PsPC_Documents_Unreal_SpartaProject_Source_SpartaProject_Public_BlindItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
