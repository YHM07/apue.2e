/*
 * =====================================================================================
 *
 *       Filename:  ls.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2015 03:57:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  H.M.Yang,yangheming55@126.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <dirent.h>

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
	DIR *dp;
	struct dirent *dirp;

	if ( argc != 2 ) {
		fprintf(stderr,"usage: %s <directory name>\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	if ( (dp = opendir(argv[1])) == NULL ){
		fprintf(stderr,"can't open %s\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	while ( (dirp = readdir(dp)) != NULL ) {
		fprintf(stdout,"%s\n",dirp->d_name);
	}
	closedir(dp);
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
