#include<stdio.h>
int main()
{
	int a,r=0,n,b;
	printf("Enter a number :");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	printf("\n The revers of %d is %d.",b,r);
	return 0;
}