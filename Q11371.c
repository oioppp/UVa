#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *a, char *b){
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(int argc, char const *argv[])
{
	int min, max, c;
	char input[10],input_M[10];
	while(scanf("%s",input)){
		int i, j;
		for(i = 1; i < strlen(input); i++){
			for(j = i; j > 0; j--){
				if(input[j] < input[j-1])
					swap(&input[j-1] , &input[j]);
				else 
					break;
			}
		}
		c = strlen(input)-1;
		for(i = c; i >= 0; i--)	
			input_M[c-i] = input[i]; 
		min = atoi(input);
		max = atoi(input_M);
		printf("%d - %d = %d = 9 * %d\n", max , min, max-min, (max-min)/9);

	}
	return 0;
}