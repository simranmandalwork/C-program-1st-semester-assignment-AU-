#include<stdio.h>
int f(int n)
{
	if (n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return f(n-1)+f(n-2);
}
int main()
{
	int n,i;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("\n The fibonacci series: ");
	for(i=0;i<n;i++)
	{
	printf("\t%d",f(i));
}
return 0;
}