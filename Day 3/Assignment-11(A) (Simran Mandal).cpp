#include<stdio.h>
int main()
{
	int n,s;
	printf("Enter the number:");
	scanf("%d",&n);
	s=n%10;
	printf("\n The last digit of the number:%d",s);
	return 0;
}