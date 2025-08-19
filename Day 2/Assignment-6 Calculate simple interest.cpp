#include<stdio.h>
int main()
{
	int p,r,t;
	float si;
	printf("Enter the principle amount:");
	scanf("%d",&p);
	printf("\n Enter the rate of interest:");
	scanf("%d",&r);
	printf("\n Enter the time:");
	scanf("%d",&t);
	si=p*r*t/100;
	printf("\n The interest is:%f",si);
	return 0;
}
