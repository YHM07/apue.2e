/*
 * =====================================================================================
 *
 *       Filename:  filetype.c
 *
 *    Description:  对每个命令行参数打印文件类对每个命令行参数打印文件类型
 *
 *        Version:  1.0
 *        Created:  03/28/2015 04:32:34 PM
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
 *         Name:  filetype
 *  Description:  
 * =====================================================================================
 */
	int
filetype ( int argc, char *argv[] )
{
	int i;
	struct stat buf;
	char *ptr;
	for ( i = 1; i < argc; i++){
		printf("%s: ",argv[i]);
		if ( lstat(argv[i],&buf) == -1 ){
			perror("lstat");
			continue;
		}
		if ( S_ISREG(buf.st_mode) )
			ptr = "regular";
		else if ( S_ISDIR(buf.st_mode) )
			ptr = "directory";
		else if ( S_ISCHR(buf.st_mode) )
			ptr = "character special";
		else if ( S_ISBLK(buf.st_mode) )
			ptr = "block special";
		else if ( S_ISFIFO(buf.st_mode) )
			ptr = "FIFO";
		else if ( S_ISLNK(buf.st_mode) )
			ptr = "symbolic link";
		else if ( S_ISSOCK(buf.st_mode) )
			ptr = "socket";
		else 
			ptr = "** unknown mode **";
		printf ( "%s\n",ptr );
	}
	
	return EXIT_SUCCESS;
}				/* ----------  end of function filetype   ---------- */
