#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter 1st number:");
    scanf("%d",&n1);
    printf("Enter 2nd number:");
    scanf("%d",&n2);
    if (n1>n2)
	{
    printf("\n%d is greater than %d",n1,n2);
    }
	else 
	if (n2>n1)
	{
    printf("\n%d is greater than %d",n2,n1);
    }
	else
	{
    printf("\nBoth numbers are equal.");
    }
    return 0;
}
