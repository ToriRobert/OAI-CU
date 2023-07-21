/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_SIB6_H_
#define	_SIB6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SIB6 */
typedef struct SIB6 {
	BIT_STRING_t	 messageIdentifier;
	BIT_STRING_t	 serialNumber;
	OCTET_STRING_t	 warningType;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB6;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB6_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB6_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SIB6_H_ */
#include <asn_internal.h>
