/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_BandCombinationInfoSN_H_
#define	_BandCombinationInfoSN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandCombinationIndex.h"
#include "FeatureSetEntryIndex.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BandCombinationInfoSN */
typedef struct BandCombinationInfoSN {
	BandCombinationIndex_t	 bandCombinationIndex;
	FeatureSetEntryIndex_t	 requestedFeatureSets;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationInfoSN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationInfoSN;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombinationInfoSN_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationInfoSN_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationInfoSN_H_ */
#include <asn_internal.h>
