#include <stdio.h>

int main(int argc, char const *argv[])
{
	int Y_2011[12] = {6,2,2,5,7,3,5,1,4,6,2,4};
	const char *week_info[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int sets,i;
	scanf("%d",&sets);
	for(i=0;i<sets;i++){
		int month, date, day;
		scanf("%d %d",&month,&date);
		day =  (Y_2011[month-1]+(date-1))%7;
		printf("%s\n", week_info[day]);
	}
	return 0;
}