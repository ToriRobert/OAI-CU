/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "UERadioAccessCapabilityInformation-IEs.h"

static int
memb_ue_RadioAccessCapabilityInfo_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_oer_constraints_t asn_OER_memb_ue_RadioAccessCapabilityInfo_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_ue_RadioAccessCapabilityInfo_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_3 = {
	sizeof(struct UERadioAccessCapabilityInformation_IEs__nonCriticalExtension),
	offsetof(struct UERadioAccessCapabilityInformation_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_3 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_3,
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_3,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_3)
		/sizeof(asn_DEF_nonCriticalExtension_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UERadioAccessCapabilityInformation_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UERadioAccessCapabilityInformation_IEs, ue_RadioAccessCapabilityInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_ue_RadioAccessCapabilityInfo_constr_2, &asn_PER_memb_ue_RadioAccessCapabilityInfo_constr_2,  memb_ue_RadioAccessCapabilityInfo_constraint_1 },
		0, 0, /* No default value */
		"ue-RadioAccessCapabilityInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct UERadioAccessCapabilityInformation_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UERadioAccessCapabilityInformation_IEs_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_UERadioAccessCapabilityInformation_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UERadioAccessCapabilityInformation_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-RadioAccessCapabilityInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UERadioAccessCapabilityInformation_IEs_specs_1 = {
	sizeof(struct UERadioAccessCapabilityInformation_IEs),
	offsetof(struct UERadioAccessCapabilityInformation_IEs, _asn_ctx),
	asn_MAP_UERadioAccessCapabilityInformation_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UERadioAccessCapabilityInformation_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UERadioAccessCapabilityInformation_IEs = {
	"UERadioAccessCapabilityInformation-IEs",
	"UERadioAccessCapabilityInformation-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UERadioAccessCapabilityInformation_IEs_tags_1,
	sizeof(asn_DEF_UERadioAccessCapabilityInformation_IEs_tags_1)
		/sizeof(asn_DEF_UERadioAccessCapabilityInformation_IEs_tags_1[0]), /* 1 */
	asn_DEF_UERadioAccessCapabilityInformation_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UERadioAccessCapabilityInformation_IEs_tags_1)
		/sizeof(asn_DEF_UERadioAccessCapabilityInformation_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UERadioAccessCapabilityInformation_IEs_1,
	2,	/* Elements count */
	&asn_SPC_UERadioAccessCapabilityInformation_IEs_specs_1	/* Additional specs */
};

