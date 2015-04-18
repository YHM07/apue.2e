/*
 * =====================================================================================
 *
 *       Filename:  symlink.c
 *
 *    Description:  creat symbol link
 *
 *        Version:  1.0
 *        Created:  04/18/2015 11:22:16 AM
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

#define	BUFFSIZE 4096			/*  */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	int n;
	char buf[BUFFSIZE];
	if ( symlink( "test","foo" ) == -1 )
		err_sys("symlink error");
	if ( ( n = readlink("foo",buf,BUFFSIZE) ) == -1 )
		err_sys("readlink error");
	buf[n] = '\0';
	printf ( "readlink: %s\n",buf );
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
