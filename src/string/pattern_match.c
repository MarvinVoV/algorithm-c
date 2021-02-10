#include <stdio.h>
#include <string.h>

int nfind(char *str, char *pat){
	
	int lasts = strlen(str) - 1;
	int lastp = strlen(pat) - 1;
	int endmatch = lastp;
	int i, j, start = 0;
	/* match the last character of the pattern first, and then match from the begining
	   */
	for(i = 0; endmatch <= lasts; endmatch++, start++){
		if(str[endmatch] == pat[lastp]){
			for(j = 0, i = start; j < lastp && str[i] == pat[j]; j++, i++);
		}
		if(j == lastp)
		   return start; /* successful */
	}
	return -1;	
}

int main(void){
	char str[] = "cabb";
	char pat[] = "abb";
	int r = nfind(str, pat);	
	printf("%d\n", r);	
	return 0;
}
