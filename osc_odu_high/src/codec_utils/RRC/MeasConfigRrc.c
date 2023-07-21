/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "MeasConfigRrc.h"

#include "MeasObjectToRemoveList.h"
#include "MeasObjectToAddModList.h"
#include "ReportConfigToRemoveList.h"
#include "ReportConfigToAddModList.h"
#include "MeasIdToRemoveList.h"
#include "MeasIdToAddModList.h"
#include "QuantityConfig.h"
#include "MeasGapConfig.h"
#include "MeasGapSharingConfig.h"
static asn_oer_constraints_t asn_OER_type_s_MeasureConfig_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_s_MeasureConfig_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_s_MeasureConfig_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasConfigRrc__s_MeasureConfig, choice.ssb_RSRP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-RSRP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasConfigRrc__s_MeasureConfig, choice.csi_RSRP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RSRP"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_s_MeasureConfig_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-RSRP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-RSRP */
};
static asn_CHOICE_specifics_t asn_SPC_s_MeasureConfig_specs_8 = {
	sizeof(struct MeasConfigRrc__s_MeasureConfig),
	offsetof(struct MeasConfigRrc__s_MeasureConfig, _asn_ctx),
	offsetof(struct MeasConfigRrc__s_MeasureConfig, present),
	sizeof(((struct MeasConfigRrc__s_MeasureConfig *)0)->present),
	asn_MAP_s_MeasureConfig_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_s_MeasureConfig_8 = {
	"s-MeasureConfig",
	"s-MeasureConfig",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_s_MeasureConfig_constr_8, &asn_PER_type_s_MeasureConfig_constr_8, CHOICE_constraint },
	asn_MBR_s_MeasureConfig_8,
	2,	/* Elements count */
	&asn_SPC_s_MeasureConfig_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasConfigRrc_1[] = {
	{ ATF_POINTER, 10, offsetof(struct MeasConfigRrc, measObjectToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectToRemoveList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectToRemoveList"
		},
	{ ATF_POINTER, 9, offsetof(struct MeasConfigRrc, measObjectToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectToAddModList"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasConfigRrc, reportConfigToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportConfigToRemoveList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportConfigToRemoveList"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasConfigRrc, reportConfigToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportConfigToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportConfigToAddModList"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasConfigRrc, measIdToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasIdToRemoveList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdToRemoveList"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasConfigRrc, measIdToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasIdToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measIdToAddModList"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasConfigRrc, s_MeasureConfig),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_s_MeasureConfig_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-MeasureConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasConfigRrc, quantityConfig),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"quantityConfig"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasConfigRrc, measGapConfig),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasGapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapConfig"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasConfigRrc, measGapSharingConfig),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasGapSharingConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapSharingConfig"
		},
};
static const int asn_MAP_MeasConfigRrc_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_MeasConfigRrc_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasConfigRrc_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measObjectToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportConfigToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reportConfigToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measIdToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measIdToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* s-MeasureConfig */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* quantityConfig */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* measGapConfig */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* measGapSharingConfig */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasConfigRrc_specs_1 = {
	sizeof(struct MeasConfigRrc),
	offsetof(struct MeasConfigRrc, _asn_ctx),
	asn_MAP_MeasConfigRrc_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_MeasConfigRrc_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasConfigRrc = {
	"MeasConfigRrc",
	"MeasConfigRrc",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasConfigRrc_tags_1,
	sizeof(asn_DEF_MeasConfigRrc_tags_1)
		/sizeof(asn_DEF_MeasConfigRrc_tags_1[0]), /* 1 */
	asn_DEF_MeasConfigRrc_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasConfigRrc_tags_1)
		/sizeof(asn_DEF_MeasConfigRrc_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasConfigRrc_1,
	10,	/* Elements count */
	&asn_SPC_MeasConfigRrc_specs_1	/* Additional specs */
};

