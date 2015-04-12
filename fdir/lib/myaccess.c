/*
 * =====================================================================================
 *
 *       Filename:  access.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2015 03:25:46 PM
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
#include <error.h>
#include <fcntl.h>

int myaccess(int argc, char *argv[])
{
	if ( argc != 2 ) 
	{
		printf ( "usage: a.out <pathname>\n" );
//		exit(1);
		return 0;
	}
	if ( access(argv[1],R_OK) == -1 )
	{
		printf("access error for %s\n",argv[1]);
	}
	else
	{
		printf ( "read access\n" );
	}
	if ( open(argv[1],O_RDONLY) == -1 )
	{
		printf("open error for %s\n",argv[1]);	
	}
	else
	{
		printf ( "open for reading OK\n" );
	}
	return 0;
}
