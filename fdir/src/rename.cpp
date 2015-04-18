/*
 * =====================================================================================
 *
 *       Filename:  rename.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2015 09:28:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  H.M.Yang,yangheming55@126.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "apue.h"

#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	if ( rename( "foo","foo" ) == -1 )
		err_sys("rename error");
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
