#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("multiplication table of %d is\n",n);
	
	for(i=1,i<=10,i++)
	{
		printf("%d%d=%d\n",n,9,n*i);
		return 0;
	}
}
