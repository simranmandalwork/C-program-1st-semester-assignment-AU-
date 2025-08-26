#include<stdio.h>
#include<math.h>
int main()
{
	int p;
	float r,a,c,t;
	printf("Enter the principle value:");
	scanf("%d",&p);
	printf("\nEnter the rate of interest:");
	scanf("%f",&r);
	printf("\nEnter the time:");
	scanf("%f",&t);
	a=p*(1+r);
	c=pow(a,t);
	printf("\n The compound interest is:%.2f",c);
	return 0;
}