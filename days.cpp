#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the year and month");
	scanf("%d%d",&y,&m);
	if(m==1||m==5||m==7||m=8||m=10||m=12)
	{
		printf("days in the month are 31");
	}
	else if(m==2&&(y%100!=0||y%400==0))
	{
		printf("days in the month are 29");
	}
	else if("days in the month are 30");
	
	
}


