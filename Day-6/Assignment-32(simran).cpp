#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("\n Sum of first %d natural number is : %d",n,s);
	return 0;
}