#include <stdio.h>

void swap(char *a, char *b){
	char t = *a;
	*a = *b;
	*b = t;
}

void permu(char *s, int start, int end){
	if(start == end){
		for(int i = 0; i <= end; i++)
			printf("%c ", s[i]);
		printf("\t");	
	}else{
		for(int i = start; i <= end; i++){
			swap(&s[i], &s[start]);
			permu(s, start + 1, end);
			swap(&s[i], &s[start]);
		}
	}
}

int main(void){
	char s[3] = {'a', 'b', 'c'};
	permu(s, 0, 2);		
	printf("\n");
	return 0;
}
