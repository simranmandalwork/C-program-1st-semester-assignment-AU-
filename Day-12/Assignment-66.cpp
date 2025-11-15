#include<stdio.h>
void swap1(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	return;
}
void swap2(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
}
int main()
{
	int a,b;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	swap1(a,b);
	printf("\n Using call by reference:");
	printf("\nThe value of a is %d",a);
	printf("\nThe value of b is %d",b);
	swap2(&a,&b);
	printf("\n Using call by value:");
	printf("\nThe value of a is %d",a);
	printf("\nThe value of b is %d",b);
	return 0;
}
