/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#ifndef	_HandStartMessage_H_
#define	_HandStartMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include "Card.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HandStartMessage */
typedef struct HandStartMessage {
	NonZeroId_t	 gameId;
	Card_t	 yourCard1;
	Card_t	 yourCard2;
	long	 smallBlind;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandStartMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandStartMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _HandStartMessage_H_ */