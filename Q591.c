#include <stdio.h>
int main(void)
{
	int run=1;
	int heap_num=0 , i , height;
	int heaps[100] ,h=0;
	int height_input;
	int heights[5000];
	heaps[0]=0;
	while(run){
	do{
		scanf("%d",&heap_num);
	}while(heap_num>50 || heap_num<0);
	if(heap_num==0){
		break;
	}
	h++;
	heaps[h]=heaps[h-1]+heap_num;
	for(i=heaps[h-1];i<heaps[h];i++){
		do{
			scanf("%d",&height_input);
			height = height_input;
		}while(height>100||height<=0);
		
		heights[i] = height;
	}
}	
	for(i=0;i<h;i++){
		int result=0;
		int sum=0;
		int avg;
		int k;
		for(k=heaps[i];k<heaps[i+1];k++){
			sum += heights[k];
		}
		avg = sum / (k-heaps[i]);
		for(k=heaps[i];k<heaps[i+1];k++){
			if(heights[k]<avg){
				result = result + avg - heights[k];
			}
		}
		printf("Set #%d\n", i+1);
		printf("The minimum number of moves is %d.\n\n", result);
	}
}	