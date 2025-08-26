#include<stdio.h>
int main()
{
	int n,s,a,b;
	printf("Enter the number:");
	scanf("%d",&n);
	s=n/10;
	a=s*10;
	b=n-a;
	printf("\n The last digit of the number:%d",b);
	return 0;
}