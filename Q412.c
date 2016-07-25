/*
float is 32 bits 
double is 64 bits(less bias)
command line add -lm in gcc 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(int a,int b,int r){
	int c;
	if(r==1 || a==1 ||b==1) return 1;
	else if(r==0) return 0;
	else{
		if(a>b) c = compare(a%b,b,a%b);
		else c = compare(a,b%a,b%a);
		return c;
	}
}
int main(int argc, char const *argv[])
{
	int count, input;
	while(1){
		double pi;
		int i, j, e = 0, o = 0, sum = 0;
		scanf("%d",&count);
		if(count == 0) break;
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
			for(j=0;j<e;j++){
				sum += compare(odd[i], even[j], 2);
			}
			for(j=i+1;j<o;j++){
				sum += compare(odd[i], odd[j], 2);
			}
		}
		if(sum>0){
			int num = (count*(count-1))/2;
			pi = sqrt((double)6*num/sum);
			printf("%lf\n",pi);
		}
		else printf("No estimate for this data set.\n");
	}
	return 0;
}