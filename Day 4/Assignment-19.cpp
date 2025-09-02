#include<stdio.h>
int main()
{
    char toss;
    printf("Enter H for Head or T for Tail:");
    scanf("%c",&toss);
    if(toss=='H'||toss =='h')
	{
    printf("\nIt is Head.");
    }
	else
	if(toss=='T'||toss=='t')
	{
    printf("\nIt is Tail.");
    }
	else
	{
    printf("\nInvalid input! Please enter H or T only.");
    }
    return 0;
}
