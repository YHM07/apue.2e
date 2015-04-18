/*
 * =====================================================================================
 *
 *       Filename:  utime.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2015 03:13:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  H.M.Yang,yangheming55@126.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <utime.h>
#include <stdio.h>
#include <error.h>

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
	int i;
	int fd;
	struct stat statbuf;
	struct utimbuf timebuf;

	if ( argc < 2 ){
		fprintf(stderr,"Usage: %s <pathname>\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	for ( i=1;i<argc;++i ) {
		if ( stat(argv[i],&statbuf) == -1 ) {   /* fetch current times */
			fprintf(stderr,"%s:stat error\n",argv[i]);
//			exit(EXIT_FAILURE);
			continue;
		}
		if ( (fd = open(argv[i],O_RDWR | O_TRUNC)) == -1 ) { /* truncate */
			fprintf(stderr,"%s:open error\n",argv[i]);
			continue;
		}
		close(fd);
		timebuf.actime = statbuf.st_atime;
		timebuf.modtime = statbuf.st_mtime;
		if ( utime(argv[i],&timebuf) == -1 ) {  /* reset times */
			fprintf(stderr,"%s:utime error\n",argv[i]);
			continue;
	   	}

			
	}
		
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
