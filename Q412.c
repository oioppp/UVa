/*
float is 32 bits 
double is 64 bits(less bias)
command line add -lm in gcc 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(int a,int b){
	while((a %= b) && (b %= a));
	if((a+b)==1) return 1;
	else return 0;
}
int main(int argc, char const *argv[])
{
	int count, input;
	while(scanf("%d",&count) && count!=0){
		double pi;
		int i, j, e = 0, o = 0, sum = 0;
		int even[count];
		int odd[count];
		for(i=0; i<count; i++){
			scanf("%d",&input);
			if(input%2==1){
				odd[o] = input;
				o++;
			}else{
				even[e] = input;
				e++;
			}
		}
		for(i=0;i<o;i++){
			int k;
			for(j=0;j<e;j++)
				sum += compare(odd[i], even[j]);
			for(j=i+1;j<o;j++)
				sum += compare(odd[i], odd[j]);
		}
		if(sum>0){
			int num = (count*(count-1))/2;
			pi = sqrt((double)6*num/sum);
			printf("%lf\n",pi);
		}
		else 
			printf("No estimate for this data set.\n");
	}
	return 0;
}