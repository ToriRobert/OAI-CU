/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_SIB5_H_
#define	_SIB5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-Reselection.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqListEUTRA;
struct SpeedStateScaleFactors;

/* SIB5 */
typedef struct SIB5 {
	struct CarrierFreqListEUTRA	*carrierFreqListEUTRA;	/* OPTIONAL */
	T_Reselection_t	 t_ReselectionEUTRA;
	struct SpeedStateScaleFactors	*t_ReselectionEUTRA_SF;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB5;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB5_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB5_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SIB5_H_ */
#include <asn_internal.h>