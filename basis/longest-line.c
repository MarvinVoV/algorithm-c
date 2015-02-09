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

#define MAXLINE 1000  	/* maximum input line length */

void copy(char to[],char from[]);
int getLine(char s[],int limit);


int main(void) {
	int len; 			/* current line length */
	int max;			/* maximum length seen so far */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE]; /* longest line saved here */

	max=0;
	while((len=getLine(line,MAXLINE))>0){
		if(len>max){
			max=len;
			copy(longest,line);
		}
	}
	if(max>0) /* there was a line */
		printf("%s",longest);
	return EXIT_SUCCESS;
}

/* assume to is big enough*/
void copy(char to[],char from[]){
	int i=0;
	while((to[i]=from[i])!='\0')
		i++;
}
/* read a line into s ,return length */
int getLine(char s[],int limit){
	int c,i;
	for(i=0;i<limit-1 && (c=getchar())!=EOF && c!='\n'; i++){
		s[i]=c;
	}
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}

