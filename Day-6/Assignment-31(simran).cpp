#include<stdio.h>
int main()
{
	int n,i,m;
	printf("Enter the value: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	m=n*i;
	printf("\n %d*%d=%d",n,i,m);
	}
	return 0;
}