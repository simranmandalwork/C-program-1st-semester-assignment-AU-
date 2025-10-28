#include<stdio.h>
int main()
{
	int n,a,n1,r=0;
	printf("Enter a number :");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
if(r==n1)
{
printf("\n %d number is a palindrom number ",r);
}
else
printf("\n %d is not a palindrom number",r);
	return 0;

}
