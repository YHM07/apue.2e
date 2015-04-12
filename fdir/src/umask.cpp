/*
 * =====================================================================================
 *
 *       Filename:  umask.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2015 09:03:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  H.M.Yang,yangheming55@126.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <error.h>
#include <fcntl.h>
#include <sys/stat.h>

#include <stdlib.h>

#define	RWRWRW S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	umask(0);
	if ( creat( "foo",RWRWRW ) == -1 )
	{
		perror("creat error for foo");
	}
	umask(S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
	if ( creat( "bar",RWRWRW ) == -1 )
	{
		perror("creat error for bar");
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
