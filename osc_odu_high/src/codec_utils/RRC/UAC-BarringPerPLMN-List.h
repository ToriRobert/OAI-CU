/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_UAC_BarringPerPLMN_List_H_
#define	_UAC_BarringPerPLMN_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UAC_BarringPerPLMN;

/* UAC-BarringPerPLMN-List */
typedef struct UAC_BarringPerPLMN_List {
	A_SEQUENCE_OF(struct UAC_BarringPerPLMN) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UAC_BarringPerPLMN_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UAC_BarringPerPLMN_List;
extern asn_SET_OF_specifics_t asn_SPC_UAC_BarringPerPLMN_List_specs_1;
extern asn_TYPE_member_t asn_MBR_UAC_BarringPerPLMN_List_1[1];
extern asn_per_constraints_t asn_PER_type_UAC_BarringPerPLMN_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UAC_BarringPerPLMN_List_H_ */
#include <asn_internal.h>
