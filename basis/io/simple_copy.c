/*
 ============================================================================
 Name        : basis.c
 Author      : louis
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>



int main(int argc,char *argv[]){
	char c;
	int in,out;
	if(argc!=3){
		fprintf(stderr,"Usage:copy arg1 to arg2.\n");
		exit(1);
	}

	in=open(argv[1],O_RDONLY);
	out=open(argv[2],O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
	while(read(in,&c,1)==1){
		write(out,&c,1);
	}

	exit(0);
}




