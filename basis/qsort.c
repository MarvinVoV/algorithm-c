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


/* interchange v[i] and v[j] */
void swap(int v[],int i,int j){
	int tmp;
	tmp=v[i];
	v[i]=v[j];
	v[j]=tmp;
}

void my_qsort(int v[],int left,int right){
	int i,last;
	if(left>=right)
		return;
	swap(v,left,(left+right)/2);
	last=left;
	for(i=left+1;i<=right;i++){
		if(v[i]<v[left]){
			swap(v,++last,i);
		}
	}
	swap(v,left,last);
	my_qsort(v,left,last-1);
	my_qsort(v,last+1,right);
}

int main(void) {
	int v[]={1,3,7,5,2,9,0};
	my_qsort(v,0,6);
	int i=0;
	for(;i<7;i++){
		printf("%d ",v[i]);
	}
	return EXIT_SUCCESS;
}




