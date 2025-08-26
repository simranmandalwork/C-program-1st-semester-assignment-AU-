#include<stdio.h>
int main()
{
	float a,p,w,l;
	printf("Enter the width:");
	scanf("%f",&w);
	printf("\nEnter the length:");
	scanf("%f",&l);
	a=w*l;
	printf("\nThe area of the rectangel:%.2f",a);
	p=2*(w+l);
	printf("\nThe perimeter of the rectangel:%.2f",p);
	return 0;
}