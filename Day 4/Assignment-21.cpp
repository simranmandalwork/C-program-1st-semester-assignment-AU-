#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%400==0)
	{
    printf("\n%d is a Leap Year.",year);
    }
    else if(year%100==0)
	{
    printf("\n%d is NOT a Leap Year.",year);
    }
    else if(year%4==0)
	{
    printf("\n%d is a Leap Year.",year);
    }
    else{
    printf("\n%d is NOT a Leap Year.",year);
    }
    return 0;
}
