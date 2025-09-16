#include<stdio.h>
int main()
{
	int f=1,i,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	f=i*f;
}
	printf("\n The factorial value of the number is : %d",f);
    return 0;
}