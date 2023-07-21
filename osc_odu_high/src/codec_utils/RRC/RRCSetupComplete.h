/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_RRCSetupComplete_H_
#define	_RRCSetupComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCSetupComplete__criticalExtensions_PR {
	RRCSetupComplete__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCSetupComplete__criticalExtensions_PR_rrcSetupComplete,
	RRCSetupComplete__criticalExtensions_PR_criticalExtensionsFuture
} RRCSetupComplete__criticalExtensions_PR;

/* Forward declarations */
struct RRCSetupComplete_IEs;

/* RRCSetupComplete */
typedef struct RRCSetupComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCSetupComplete__criticalExtensions {
		RRCSetupComplete__criticalExtensions_PR present;
		union RRCSetupComplete__criticalExtensions_u {
			struct RRCSetupComplete_IEs	*rrcSetupComplete;
			struct RRCSetupComplete__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCSetupComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCSetupComplete;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCSetupComplete_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCSetupComplete_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCSetupComplete_H_ */
#include <asn_internal.h>
