/*
 * =====================================================================================
 *
 *       Filename:  chown.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2015 11:37:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  H.M.Yang,yangheming55@126.com
 *   Organization:  
 *
 * =====================================================================================
 */

//#include "../inc/apue.h"
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
	if ( chown("foo",65534,-1) == -1 )
	{
		err_sys("chown error for foo");
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
