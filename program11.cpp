#include<stdio.h>
int main()
{
	int  n,i,j,s;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d",i);
		
		print("\n");
	}
	return 0;
}
