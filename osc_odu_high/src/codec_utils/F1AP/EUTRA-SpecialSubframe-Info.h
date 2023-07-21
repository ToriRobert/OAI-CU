/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_EUTRA_SpecialSubframe_Info_H_
#define	_EUTRA_SpecialSubframe_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRA-SpecialSubframePatterns.h"
#include "EUTRA-CyclicPrefixDL.h"
#include "EUTRA-CyclicPrefixUL.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* EUTRA-SpecialSubframe-Info */
typedef struct EUTRA_SpecialSubframe_Info {
	EUTRA_SpecialSubframePatterns_t	 specialSubframePatterns;
	EUTRA_CyclicPrefixDL_t	 cyclicPrefixDL;
	EUTRA_CyclicPrefixUL_t	 cyclicPrefixUL;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_SpecialSubframe_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_SpecialSubframe_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_SpecialSubframe_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_SpecialSubframe_Info_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_SpecialSubframe_Info_H_ */
#include <asn_internal.h>