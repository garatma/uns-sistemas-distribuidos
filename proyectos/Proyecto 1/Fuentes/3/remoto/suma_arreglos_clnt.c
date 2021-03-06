/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "suma_arreglos.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

argumento *
suma_arreglos_1(argumento *argp, CLIENT *clnt)
{
	static argumento clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, suma_arreglos,
		(xdrproc_t) xdr_argumento, (caddr_t) argp,
		(xdrproc_t) xdr_argumento, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
