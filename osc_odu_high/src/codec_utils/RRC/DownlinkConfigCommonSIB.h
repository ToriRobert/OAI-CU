/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_DownlinkConfigCommonSIB_H_
#define	_DownlinkConfigCommonSIB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FrequencyInfoDL-SIB.h"
#include "BWP-DownlinkCommon.h"
#include "BCCH-Config.h"
#include "PCCH-Config.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DownlinkConfigCommonSIB */
typedef struct DownlinkConfigCommonSIB {
	FrequencyInfoDL_SIB_t	 frequencyInfoDL;
	BWP_DownlinkCommon_t	 initialDownlinkBWP;
	BCCH_Config_t	 bcch_Config;
	PCCH_Config_t	 pcch_Config;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DownlinkConfigCommonSIB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DownlinkConfigCommonSIB;
extern asn_SEQUENCE_specifics_t asn_SPC_DownlinkConfigCommonSIB_specs_1;
extern asn_TYPE_member_t asn_MBR_DownlinkConfigCommonSIB_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _DownlinkConfigCommonSIB_H_ */
#include <asn_internal.h>