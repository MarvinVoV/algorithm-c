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


/* my_atoi: convert s to integer */
int my_atoi(char s[]){
	int i,n;
	n=0;
	for(i=0;s[i]>='0' && s[i]<='9';++i)
		n=n*10+(s[i]-'0');
	return n;
}

int main(void) {
	char s[]="123";
	int n;
	n=my_atoi(s);
	printf("%d",n);

	return EXIT_SUCCESS;
}




