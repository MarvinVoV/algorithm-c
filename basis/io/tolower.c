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
#include <ctype.h>



int main(int argc,char *argv[]){
	/* lower: convert input to lower case */
	int c;
	while((c=getchar())!=EOF){
		putchar(tolower(c));
	}

	return EXIT_SUCCESS;
}




