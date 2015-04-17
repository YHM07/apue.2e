/*
 * =====================================================================================
 *
 *       Filename:  unlinked.c
 *
 *    Description:  打开一个文件，然后Unlink
 *
 *        Version:  1.0
 *        Created:  04/17/205 08:40:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  H.M.Yang,yangheming55@126.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "apue.h"
#include <fcntl.h>

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
	if ( open( "foo",O_RDWR ) == -1 )
		err_sys("open error");
	if ( unlink("foo") == -1 )
		err_sys("unlink error");
	printf ( "file unlinked\n" );
	sleep(5);
	printf ( "done\n" );
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
