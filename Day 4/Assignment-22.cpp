#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("\nEnter 2nd number:");
    scanf("%d",&b);
    printf("\nEnter 3rd number:");
    scanf("%d",&c);
    if(a>=b&&a>=c)
	{
    printf("\n%d is the greatest.",a);
    }
    else if(b>=a&&b>=c)
	{
    printf("\n%d is the greatest.",b);
    }
    else
	{
    printf("\n%d is the greatest.",c);
    }
    return 0;
}
