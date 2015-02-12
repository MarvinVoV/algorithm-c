#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char str[]="here is some data\n";
	n=write(2,str,strlen(str));
	printf("data length is %d\n",n);

	exit(0);
}
