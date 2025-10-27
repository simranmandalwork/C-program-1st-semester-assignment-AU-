#include<stdio.h>
int main()
{
    int n,d1,d2,sum,p,result;
    printf("Enter a two digit number: ");
    scanf("%d",&n);
    d1=n/10;
    d2=n%10;
    sum=d1+d2;
    p=d1*d2;
    result=sum+p;
    if (result==n)
    printf("Special 2 digit number\n");
    else
    printf("Not a special 2 digit number\n");
    return 0;
}
