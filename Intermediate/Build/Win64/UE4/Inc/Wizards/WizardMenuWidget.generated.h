// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WIZARDS_WizardMenuWidget_generated_h
#error "WizardMenuWidget.generated.h already included, missing '#pragma once' in WizardMenuWidget.h"
#endif
#define WIZARDS_WizardMenuWidget_generated_h

#define Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetClothingColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_clothesslot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->getClothingColor(Z_Param_clothesslot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetClothingColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_clothesslot); \
		P_GET_PROPERTY(UIntProperty,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setClothingColor(Z_Param_clothesslot,Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetClothingItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_clothesslot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->getClothingItem(Z_Param_clothesslot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetClothingItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_clothesslot); \
		P_GET_PROPERTY(UIntProperty,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setClothingItem(Z_Param_clothesslot,Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetchin_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getchin_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetchin_size) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getchin_size(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetchin_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getchin_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetchin_depth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getchin_depth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetchin_cleft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getchin_cleft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetear_slant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getear_slant(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetear_size) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getear_size(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetear_outwardness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getear_outwardness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetear_lobesize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getear_lobesize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetear_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getear_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetbrow_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getbrow_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetbrow_thickness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getbrow_thickness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetbrow_slant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getbrow_slant(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetbrow_position) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getbrow_position(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetbrow_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getbrow_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgeteye_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->geteye_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgeteye_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->geteye_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgeteye_depth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->geteye_depth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_tip_size) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_tip_size(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_tip_point) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_tip_point(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_tip_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_tip_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_nostril_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_nostril_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_nostril_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_nostril_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_mid_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_mid_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_mid_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_mid_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_mid_depth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_mid_depth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_length) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_length(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_crook) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_crook(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_bridge_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_bridge_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_bridge_depth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_bridge_depth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetcheek_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getcheek_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetcheek_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getcheek_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetcheek_gauntness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getcheek_gauntness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetcheek_depth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getcheek_depth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetcheek_crease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getcheek_crease(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetjaw_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getjaw_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetjaw_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getjaw_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetjaw_definition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getjaw_definition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_underbite) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_underbite(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_ulip_size) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_ulip_size(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_ulip_fullness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_ulip_fullness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_overbite) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_overbite(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_llip_size) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_llip_size(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_llip_fullness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_llip_fullness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetchin_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setchin_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetchin_size) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setchin_size(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetchin_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setchin_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetchin_depth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setchin_depth(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetchin_cleft) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setchin_cleft(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetear_slant) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setear_slant(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetear_size) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setear_size(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetear_outwardness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setear_outwardness(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetear_lobesize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setear_lobesize(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetear_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setear_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetbrow_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setbrow_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetbrow_thickness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setbrow_thickness(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetbrow_slant) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setbrow_slant(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetbrow_position) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setbrow_position(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetbrow_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setbrow_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseteye_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->seteye_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseteye_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->seteye_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseteye_depth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->seteye_depth(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_tip_size) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_tip_size(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_tip_point) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_tip_point(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_tip_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_tip_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_nostril_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_nostril_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_nostril_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_nostril_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_mid_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_mid_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_mid_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_mid_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_mid_depth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_mid_depth(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_length) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_length(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_crook) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_crook(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_bridge_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_bridge_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_bridge_depth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_bridge_depth(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetcheek_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setcheek_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetcheek_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setcheek_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetcheek_gauntness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setcheek_gauntness(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetcheek_depth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setcheek_depth(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetcheek_crease) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setcheek_crease(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetjaw_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setjaw_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetjaw_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setjaw_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetjaw_definition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setjaw_definition(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_underbite) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_underbite(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_ulip_size) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_ulip_size(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_ulip_fullness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_ulip_fullness(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_overbite) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_overbite(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_llip_size) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_llip_size(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_llip_fullness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_llip_fullness(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplDeathSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getExplDeathSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplDeathDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getExplDeathDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplHitSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getExplHitSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplHitDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getExplHitDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplodeDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->getExplodeDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplodeHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->getExplodeHit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHoming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->getHoming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetBounce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->getBounce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetGravity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->getGravity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->getType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->getEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplDeathSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplDeathSize(Z_Param_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplDeathDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplDeathDamage(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplHitSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplHitSize(Z_Param_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplHitDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplHitDamage(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetCost) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_cost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setCost(Z_Param_cost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setSize(Z_Param_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_life); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setRange(Z_Param_life); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setSpeed(Z_Param_speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setDamage(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplodeDeath) \
	{ \
		P_GET_UBOOL(Z_Param_explodeDeath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplodeDeath(Z_Param_explodeDeath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplodeHit) \
	{ \
		P_GET_UBOOL(Z_Param_explodeHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplodeHit(Z_Param_explodeHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetHoming) \
	{ \
		P_GET_UBOOL(Z_Param_isHoming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setHoming(Z_Param_isHoming); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetBounce) \
	{ \
		P_GET_UBOOL(Z_Param_hasBounce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setBounce(Z_Param_hasBounce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetGravity) \
	{ \
		P_GET_UBOOL(Z_Param_hasGravity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setGravity(Z_Param_hasGravity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execspellChange) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_spellSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->spellChange(Z_Param_spellSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_effectChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setType(Z_Param_effectChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetEffect) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_effectChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setEffect(Z_Param_effectChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execspellsSave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->spellsSave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execspellsInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->spellsInitialize(); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetClothingColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_clothesslot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->getClothingColor(Z_Param_clothesslot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetClothingColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_clothesslot); \
		P_GET_PROPERTY(UIntProperty,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setClothingColor(Z_Param_clothesslot,Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetClothingItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_clothesslot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->getClothingItem(Z_Param_clothesslot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetClothingItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_clothesslot); \
		P_GET_PROPERTY(UIntProperty,Z_Param_item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setClothingItem(Z_Param_clothesslot,Z_Param_item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetchin_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getchin_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetchin_size) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getchin_size(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetchin_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getchin_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetchin_depth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getchin_depth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetchin_cleft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getchin_cleft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetear_slant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getear_slant(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetear_size) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getear_size(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetear_outwardness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getear_outwardness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetear_lobesize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getear_lobesize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetear_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getear_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetbrow_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getbrow_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetbrow_thickness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getbrow_thickness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetbrow_slant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getbrow_slant(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetbrow_position) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getbrow_position(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetbrow_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getbrow_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgeteye_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->geteye_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgeteye_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->geteye_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgeteye_depth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->geteye_depth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_tip_size) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_tip_size(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_tip_point) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_tip_point(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_tip_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_tip_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_nostril_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_nostril_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_nostril_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_nostril_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_mid_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_mid_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_mid_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_mid_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_mid_depth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_mid_depth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_length) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_length(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_crook) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_crook(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_bridge_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_bridge_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetnose_bridge_depth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getnose_bridge_depth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetcheek_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getcheek_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetcheek_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getcheek_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetcheek_gauntness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getcheek_gauntness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetcheek_depth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getcheek_depth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetcheek_crease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getcheek_crease(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetjaw_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getjaw_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetjaw_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getjaw_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetjaw_definition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getjaw_definition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_width) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_width(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_underbite) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_underbite(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_ulip_size) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_ulip_size(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_ulip_fullness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_ulip_fullness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_overbite) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_overbite(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_llip_size) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_llip_size(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_llip_fullness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_llip_fullness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetmouth_height) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getmouth_height(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetchin_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setchin_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetchin_size) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setchin_size(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetchin_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setchin_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetchin_depth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setchin_depth(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetchin_cleft) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setchin_cleft(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetear_slant) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setear_slant(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetear_size) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setear_size(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetear_outwardness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setear_outwardness(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetear_lobesize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setear_lobesize(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetear_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setear_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetbrow_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setbrow_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetbrow_thickness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setbrow_thickness(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetbrow_slant) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setbrow_slant(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetbrow_position) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setbrow_position(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetbrow_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setbrow_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseteye_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->seteye_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseteye_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->seteye_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execseteye_depth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->seteye_depth(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_tip_size) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_tip_size(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_tip_point) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_tip_point(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_tip_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_tip_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_nostril_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_nostril_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_nostril_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_nostril_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_mid_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_mid_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_mid_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_mid_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_mid_depth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_mid_depth(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_length) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_length(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_crook) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_crook(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_bridge_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_bridge_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetnose_bridge_depth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setnose_bridge_depth(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetcheek_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setcheek_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetcheek_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setcheek_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetcheek_gauntness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setcheek_gauntness(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetcheek_depth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setcheek_depth(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetcheek_crease) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setcheek_crease(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetjaw_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setjaw_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetjaw_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setjaw_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetjaw_definition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setjaw_definition(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_width) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_width(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_underbite) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_underbite(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_ulip_size) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_ulip_size(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_ulip_fullness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_ulip_fullness(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_overbite) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_overbite(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_llip_size) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_llip_size(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_llip_fullness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_llip_fullness(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetmouth_height) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_morph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setmouth_height(Z_Param_morph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplDeathSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getExplDeathSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplDeathDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getExplDeathDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplHitSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getExplHitSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplHitDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getExplHitDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetCost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getCost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->getDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplodeDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->getExplodeDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetExplodeHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->getExplodeHit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHoming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->getHoming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetBounce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->getBounce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetGravity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->getGravity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->getType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->getEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplDeathSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplDeathSize(Z_Param_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplDeathDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplDeathDamage(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplHitSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplHitSize(Z_Param_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplHitDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplHitDamage(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetCost) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_cost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setCost(Z_Param_cost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setSize(Z_Param_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_life); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setRange(Z_Param_life); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setSpeed(Z_Param_speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setDamage(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplodeDeath) \
	{ \
		P_GET_UBOOL(Z_Param_explodeDeath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplodeDeath(Z_Param_explodeDeath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetExplodeHit) \
	{ \
		P_GET_UBOOL(Z_Param_explodeHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setExplodeHit(Z_Param_explodeHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetHoming) \
	{ \
		P_GET_UBOOL(Z_Param_isHoming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setHoming(Z_Param_isHoming); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetBounce) \
	{ \
		P_GET_UBOOL(Z_Param_hasBounce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setBounce(Z_Param_hasBounce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetGravity) \
	{ \
		P_GET_UBOOL(Z_Param_hasGravity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setGravity(Z_Param_hasGravity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execspellChange) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_spellSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->spellChange(Z_Param_spellSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_effectChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setType(Z_Param_effectChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetEffect) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_effectChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setEffect(Z_Param_effectChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execspellsSave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->spellsSave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execspellsInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->spellsInitialize(); \
		P_NATIVE_END; \
	}


#define Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWizardMenuWidget(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_UWizardMenuWidget(); \
public: \
	DECLARE_CLASS(UWizardMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(UWizardMenuWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWizardMenuWidget(); \
	friend WIZARDS_API class UClass* Z_Construct_UClass_UWizardMenuWidget(); \
public: \
	DECLARE_CLASS(UWizardMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Wizards"), NO_API) \
	DECLARE_SERIALIZER(UWizardMenuWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWizardMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWizardMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWizardMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWizardMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWizardMenuWidget(UWizardMenuWidget&&); \
	NO_API UWizardMenuWidget(const UWizardMenuWidget&); \
public:


#define Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWizardMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWizardMenuWidget(UWizardMenuWidget&&); \
	NO_API UWizardMenuWidget(const UWizardMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWizardMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWizardMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWizardMenuWidget)


#define Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_PRIVATE_PROPERTY_OFFSET
#define Wizards_Source_Wizards_Public_WizardMenuWidget_h_13_PROLOG
#define Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_RPC_WRAPPERS \
	Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_INCLASS \
	Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_INCLASS_NO_PURE_DECLS \
	Wizards_Source_Wizards_Public_WizardMenuWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Wizards_Source_Wizards_Public_WizardMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
