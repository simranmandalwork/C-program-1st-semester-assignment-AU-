#include<stdio.h>
int gcd(int a,int b)
{int c;
	if(b==0)
	return a;
	else 
	c=a%b;
	return gcd(b,c);
}
int main()
{
	int n1,n2,g;
	printf("Enter the 1st number:");
	scanf("%d",&n1);
	printf("Enter the 2nd number:");
	scanf("%d",&n2);
	g=gcd(n1,n2);
	printf("\nGCD of %d and %d=%d",n1,n2,g);
	return 0;
}