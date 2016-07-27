#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
	return *(char*)b - *(char*)a;
}
int main(int argc, char const *argv[])
{
	int min, max, c;
	char input[10],input_m[10];
	while(scanf("%s",input)){
		int i, j ,k=0;
		qsort(input,strlen(input),sizeof(char),compare);
		c = strlen(input)-1;
		for(i = c; i >= 0; i--){
			if(!atoi(&input[i])) k++;
			else if(k && atoi(&input[i])){
				k = 0;
				input_m[0] = input[i];
				for(j = 1;j<=i;j++) input_m[j] = '0';
			}else
				input_m[c-i] = input[i]; 
		}
		max = atoi(input);
		min = atoi(input_m);
		printf("%d - %d = %d = 9 * %d\n", max , min, max-min, (max-min)/9);
	}
	return 0;
}