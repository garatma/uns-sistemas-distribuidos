/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "functions.h"

bool_t
xdr_nums (XDR *xdrs, nums *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->b))
		 return FALSE;
	return TRUE;
}
