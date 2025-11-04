#include<stdio.h>
int sum(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
{
	sum=sum+2*i;
}
return sum;
}
int main()
{
int n=10,r;
r=sum(n);
printf("The sum of 1st %d even number is %d",n,r);
return 0;
}