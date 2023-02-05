/*
 * +----------------+----------------------------------------------------------+
 *    Module/Func.   dberror.c
 * +----------------+----------------------------------------------------------+
 *    Description    Implementation of Return Codes/Messges 
 * +----------------+----------------------------------------------------------+
 */

#include <stdio.h>
#include "dberror.h"


// +---------------------------------------------------------------------------*
// return code's the message
// +---------------------------------------------------------------------------*
char *RC_message[RC_MAX] = 
{
	"Success",
	"File not found",
	"Read non existing page",
	"Failed",
	"Undefined return code"
};

// +---------------------------------------------------------------------------*
// output an error message 
// +---------------------------------------------------------------------------*
void printError(RC ret_code)
{
	// verify input ret_code
	if (ret_code >= RC_MAX)
	{
		printf("\n%s.\n",RC_message[RC_UNDEFINED_RC]); 
		return;
	}

	// print RC message
	printf("\n%s.\n", RC_message[ret_code]); 
}
