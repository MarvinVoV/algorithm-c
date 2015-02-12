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
	char buffer[1024];
	int in,out;
	int nread;
	if(argc!=3){
		fprintf(stderr,"Usage:copy arg1 to arg2.");
		exit(1);
	}

	in=open(argv[1],O_RDONLY);
	out=open(argv[2],O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
	while((nread=read(in,buffer,sizeof(buffer)))>0){
		write(out,buffer,nread);
	}
	exit(0);
}




