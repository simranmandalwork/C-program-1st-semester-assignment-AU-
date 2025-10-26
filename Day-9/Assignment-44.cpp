#include<stdio.h>
#include<math.h>
int main()
{
    int n,choice,temp,sum=0,count=0,sq,digit,a;
    printf("Menu:\n");
    printf("1. Check Narcissistic Number\n");
    printf("2. Check Automorphic Number\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(choice)
    {
    case 1:
    temp=n;
    while(temp!=0)
    {
    temp=temp/10;
    count++;
    }
    temp=n;
    while(temp!=0)
    {
    digit=temp%10;
    sum=sum+pow(digit,count);
    temp=temp/10;
    }
    if(sum==n)
    printf("%d is a Narcissistic number.\n", n);
    else
    printf("%d is NOT a Narcissistic number.\n", n);
    break;
    case 2:
    sq=n*n;
    temp=n;
    a=1;
    while(temp>0)
    {
    if((temp % 10)!=(sq%10))
    {
    a=0;
    break;
    }
    temp=temp/10;
    sq=sq/10;
    }
    if(a== 1)
    printf("%d is an Automorphic number.\n", n);
    else
    printf("%d is NOT an Automorphic number.\n", n);
    break;
    default:
    printf("Invalid choice!\n");
    }
    return 0;
}
