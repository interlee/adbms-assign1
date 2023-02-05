/*
 * +----------------+----------------------------------------------------------+
 *    Module/Func.   dberror.h
 * +----------------+----------------------------------------------------------+
 *    Description    Definition of Return Codes/Messges 
 *    Remark         RC: Return Code
 *                   RM: Return Message
 * +----------------+----------------------------------------------------------+
 */

#define RC_MAX						5

#define	RC_OK						0
#define RC_FILE_NOT_FOUND				1
#define RC_READ_NON_EXISTING_PAGE			2
#define	RC_FAIL						3
#define	RC_UNDEFINED_RC					4

typedef unsigned int RC;

extern void printError(RC);
