/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_PUCCH_ResourceSetId_H_
#define	_PUCCH_ResourceSetId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PUCCH-ResourceSetId */
typedef long	 PUCCH_ResourceSetId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PUCCH_ResourceSetId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ResourceSetId;
asn_struct_free_f PUCCH_ResourceSetId_free;
asn_struct_print_f PUCCH_ResourceSetId_print;
asn_constr_check_f PUCCH_ResourceSetId_constraint;
ber_type_decoder_f PUCCH_ResourceSetId_decode_ber;
der_type_encoder_f PUCCH_ResourceSetId_encode_der;
xer_type_decoder_f PUCCH_ResourceSetId_decode_xer;
xer_type_encoder_f PUCCH_ResourceSetId_encode_xer;
oer_type_decoder_f PUCCH_ResourceSetId_decode_oer;
oer_type_encoder_f PUCCH_ResourceSetId_encode_oer;
per_type_decoder_f PUCCH_ResourceSetId_decode_uper;
per_type_encoder_f PUCCH_ResourceSetId_encode_uper;
per_type_decoder_f PUCCH_ResourceSetId_decode_aper;
per_type_encoder_f PUCCH_ResourceSetId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_ResourceSetId_H_ */
#include <asn_internal.h>
