/* Dynamic Programming : use Buttom up */
#include <stdio.h>

void SetResult(long long *mem){
	int count=0,i,j;
	int cents[5] = {1,5,10,25,50};
	mem[0]=1;
	for(i=1;i<30001;i++)	mem[i]=0;
	for(i=0;i<5;i++){
		int a = cents[i];
		for(j=a;j<30001;j++){      
			mem[j] += mem[j-a];
		}
	}
}
int main(int argc, char const *argv[])
{
	int input;
	long long mem[30001];
	SetResult(mem);
	while(scanf("%d",&input)){
		if(mem[input]==1) printf("There is only 1 way to produce %d cents change.\n", input);
		else printf("There are %lld ways to produce %d cents change.\n" ,mem[input] ,input);
	}
	return 0;
}
