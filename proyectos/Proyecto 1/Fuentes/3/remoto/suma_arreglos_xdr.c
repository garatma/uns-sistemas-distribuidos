/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "suma_arreglos.h"

bool_t
xdr_argumento (XDR *xdrs, argumento *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->arr, 2048,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
