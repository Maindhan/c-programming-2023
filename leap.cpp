#include<stdio.h>
int main()
{
	int y;
	printf("enter the year");
	scanf("%d",&y);
	if(y%4=0&&(y%100!=0||y%400=0))
	{
		printf("this is a leep year");
    }
    else
    {
    	printf("this year is leep year");
	}
	return 0;
}
