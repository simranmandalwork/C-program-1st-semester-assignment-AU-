#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("\n %d The number is a Buzz number.",n);
	}
	else
	{
		printf("\n %d The number is not Buzz number.",n);
	}
	if(n%2==0)
{
	printf("\n %d The number is even.",n);
}
else
{
	printf("\n %d The number is odd.",n);
}
if(n>=0)
{
	printf("\n %d The number is a positive number.",n);
}
else
{
	printf("\n %d The number is a negative number.",n);
}
	return 0;
}