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


struct point{
	int x;
	int y;
};
int main(int argc,char *argv[]){
	struct point p,*pt;
	pt=&p;
	pt->x=10;
	++pt->x; // -> at the top of the precedence
	printf("%d\n",pt->x);
	printf("%d\n",(sizeof p));
}




