/*
 * =====================================================================================
 *
 *       Filename:  chmod.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2015 09:35:27 AM
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
#include <sys/stat.h>

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
	struct stat statbuf;
	/* turn on set-group-id and turn on group-execute */
	if ( stat("foo",&statbuf) == -1 )
	{
		perror("stat error for foo");
	}
	if ( chmod("foo",statbuf.st_mode & ~S_IXGRP | S_ISGID) == -1 )
	{
		perror("chmod error for foo");
	}
	/* set absoluate mode to "rw-r--r--" */
	if ( chmod("bar",S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) == -1 )
	{
		perror("chmod error for bar");
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
