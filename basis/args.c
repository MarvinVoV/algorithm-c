#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	while(--argc>0)
		printf("%s%s",*++argv,(argc>1)?" ":"");
	printf("\n");
	return 0;
}
