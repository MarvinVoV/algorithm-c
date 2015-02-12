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


/* strcpy: copy t to s; array subscript version */
void strcpy_1(char s[],char t[]){
	int i;
	i=0;
	while((s[i]=t[i])!='\0')
		i++;
}

/* strcpy: copy t to s; pointer version */
void strcpy_2(char *s,char *t){
	while((*s++=*t++)!='\0')
		;
}

/* strcpy: copy t to s; point version 2 */
void strcpy_3(char *s,char *t){
	while(*s++ = *t++)
		;
}

int main(void) {
	char vs[10]="hello";
	char vt[]="world";

	char *s=vs;
	char *t=vt;
	strcpy_3(s,t);
	printf("%s",vs);
	return EXIT_SUCCESS;
}




