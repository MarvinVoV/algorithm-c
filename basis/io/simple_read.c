#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX 128
int main(){
	char buffer[MAX];
	int nread;
	/* read from stand input */
	nread=read(0,buffer,MAX);
	if(nread<=-1)
		/* write to stand output */
		write(2,"A read error has occurred\n",26);

	if(nread!=(write(1,buffer,nread)))
		write(2,"A write error has occurred\n",27);

	exit(0);

}
