/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_EUTRA_Transmission_Bandwidth_H_
#define	_EUTRA_Transmission_Bandwidth_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EUTRA_Transmission_Bandwidth {
	EUTRA_Transmission_Bandwidth_bw6	= 0,
	EUTRA_Transmission_Bandwidth_bw15	= 1,
	EUTRA_Transmission_Bandwidth_bw25	= 2,
	EUTRA_Transmission_Bandwidth_bw50	= 3,
	EUTRA_Transmission_Bandwidth_bw75	= 4,
	EUTRA_Transmission_Bandwidth_bw100	= 5
	/*
	 * Enumeration is extensible
	 */
} e_EUTRA_Transmission_Bandwidth;

/* EUTRA-Transmission-Bandwidth */
typedef long	 EUTRA_Transmission_Bandwidth_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EUTRA_Transmission_Bandwidth_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_Transmission_Bandwidth;
extern const asn_INTEGER_specifics_t asn_SPC_EUTRA_Transmission_Bandwidth_specs_1;
asn_struct_free_f EUTRA_Transmission_Bandwidth_free;
asn_struct_print_f EUTRA_Transmission_Bandwidth_print;
asn_constr_check_f EUTRA_Transmission_Bandwidth_constraint;
ber_type_decoder_f EUTRA_Transmission_Bandwidth_decode_ber;
der_type_encoder_f EUTRA_Transmission_Bandwidth_encode_der;
xer_type_decoder_f EUTRA_Transmission_Bandwidth_decode_xer;
xer_type_encoder_f EUTRA_Transmission_Bandwidth_encode_xer;
oer_type_decoder_f EUTRA_Transmission_Bandwidth_decode_oer;
oer_type_encoder_f EUTRA_Transmission_Bandwidth_encode_oer;
per_type_decoder_f EUTRA_Transmission_Bandwidth_decode_uper;
per_type_encoder_f EUTRA_Transmission_Bandwidth_encode_uper;
per_type_decoder_f EUTRA_Transmission_Bandwidth_decode_aper;
per_type_encoder_f EUTRA_Transmission_Bandwidth_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_Transmission_Bandwidth_H_ */
#include <asn_internal.h>
