#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("from 1 to %d odd numbers are\n",n);
	
	for(i=1,i<=n/2,i++)
	{
		printf("%d",i);
	}
	return 0;
}
