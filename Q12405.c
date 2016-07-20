#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int count=0,k,sum=0;
		scanf("%d",&n);
		char field[n];
		scanf("%s",field);
		for(k=0;k<n;k++){
			if(field[k]=='.'){
				sum++;
				if(sum==3){
					sum=0;
					count++;
				}else if(field[k+1]=='\0') count++;
			}
			else if(field[k]=='#'){
				if(sum==1 && field[k+1]=='.'){
					sum=0;
					k++;
					count++;
				}else if(sum==0){}
				else{
					sum=0;
					count++;
				}
			}
		}
		printf("Case %d: %d\n",i+1,count);
	}
	return 0;
}