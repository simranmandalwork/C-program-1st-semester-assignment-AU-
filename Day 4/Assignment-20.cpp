#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>=0)
	{
    printf("\n%d is a Whole Number.",n);
    }
	else
	{
    printf("\n%d is NOT a Whole Number.",n);
    }
    return 0;
}
