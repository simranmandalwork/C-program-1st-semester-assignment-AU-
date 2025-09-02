#include<stdio.h>
int main() 
 {
    int roll;
    printf("Enter Roll Number:");
    scanf("%d",&roll);
    if(roll==100) 
	{
    printf("\nRoll 100 is present.");
    }
    if(roll!=100) 
	{
    printf("\nRoll 100 is NOT present.");
    }
    return 0;
}

