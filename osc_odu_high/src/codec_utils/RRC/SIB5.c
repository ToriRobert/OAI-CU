/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "SIB5.h"

#include "CarrierFreqListEUTRA.h"
#include "SpeedStateScaleFactors.h"
asn_TYPE_member_t asn_MBR_SIB5_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SIB5, carrierFreqListEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqListEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreqListEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SIB5, t_ReselectionEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionEUTRA"
		},
	{ ATF_POINTER, 2, offsetof(struct SIB5, t_ReselectionEUTRA_SF),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedStateScaleFactors,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionEUTRA-SF"
		},
	{ ATF_POINTER, 1, offsetof(struct SIB5, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SIB5_oms_1[] = { 0, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SIB5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SIB5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqListEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t-ReselectionEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t-ReselectionEUTRA-SF */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SIB5_specs_1 = {
	sizeof(struct SIB5),
	offsetof(struct SIB5, _asn_ctx),
	asn_MAP_SIB5_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SIB5_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SIB5 = {
	"SIB5",
	"SIB5",
	&asn_OP_SEQUENCE,
	asn_DEF_SIB5_tags_1,
	sizeof(asn_DEF_SIB5_tags_1)
		/sizeof(asn_DEF_SIB5_tags_1[0]), /* 1 */
	asn_DEF_SIB5_tags_1,	/* Same as above */
	sizeof(asn_DEF_SIB5_tags_1)
		/sizeof(asn_DEF_SIB5_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SIB5_1,
	4,	/* Elements count */
	&asn_SPC_SIB5_specs_1	/* Additional specs */
};

