/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  main function 
 *
 *        Version:  1.0
 *        Created:  03/28/2015 08:47:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  H.M.Yang,yangheming55@126.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
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
//	filetype(argc,argv);
	myaccess(argc,argv);
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
