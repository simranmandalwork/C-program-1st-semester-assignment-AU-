#include<stdio.h>
int main()
{
	float c1,c2,f1,f2;
	printf("Enter the fahrenheit temperature:");
	scanf("%f",&f1);
	c1=(f1-32)*5/9;
	printf("\n The celsius temperature:%.2f",c1);
	printf("\nEnter the celsius temperature:");
	scanf("%f",&c2);
	f2=(c2*9/5)+32;
	printf("\n The fahrenheit temperature:%.2f",f2);
	return 0;
}
