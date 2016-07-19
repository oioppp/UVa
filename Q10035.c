/*
    一開始RE 後來把result的array空間條到1000000就過了...
*/
#include <stdio.h>

int main(void){
	int n1,n2;
	int carry,count,result[1000000],i=0,j;  
	while(1){
		count=0;carry=0;
		scanf("%d",&n1);
		scanf("%d",&n2);
		if(n1==0&&n2==0) break;
		while(n1!=0||n2!=0){

			int a= n1%10 + n2%10 + carry;
			if(a>=10){
				carry = 1;
				count++;
			}else carry=0;
			n1/=10; n2/=10;
		}
		result[i] = count;
		i++;
	}
	j=0;
	while(j<i){
		if(result[j]==0) printf("No carry operation.\n");
		else if(result[j]==1) printf("1 carry operation.\n");
		else printf("%d carry operations.\n", result[j]);
		j++;
	}
	return 0;
}
