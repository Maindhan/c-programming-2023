#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three points");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("maximum point is %d",a);
	}
	else if(b>c)
	{
		printf("maximum point is %d",b);
	}
	else
	{
		printf("maximum point is %d",c);
	}
	return 0;
}
