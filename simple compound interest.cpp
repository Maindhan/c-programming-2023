#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,n,t,s,c;
	printf("principle amount is");
	scanf("%f",&p);
	printf("rate is");
	scanf("%f",&r);
	printf("number of the time the interset compoud annualy");
	scanf("%f",&n);
	printf("overall tenure");
	scanf("%f",t);
	s=(p*r*t)/100;
	printf("simple interest is %f",s);
	c=p*pow(1+r/(n*100),n*t);
	printf("compound intrest is %f",c);
	return 0;
	
}
