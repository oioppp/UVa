#include <stdio.h>
int josephus(int num , int k){
	int n = num, t;
	if(num==1) return 0;
	else{
		t = (josephus(n-1,k)+k)%num;  //j(n,k)從0開始走一次會變成j(n-1,k)從k開始
		return t;
	}
}
int main(int argc, char const *argv[])
{
	int num, i, result = 1;
	while(scanf("%d",&num) && num != 0){
		for(i = 1; i < num; i++){
			result = josephus(num - 1,i) + 2; //funciton 的結果對照題意要+2 
			if(result == 13){
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}