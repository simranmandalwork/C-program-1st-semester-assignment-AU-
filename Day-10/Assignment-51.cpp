#include<stdio.h>
int main()
{
	int i,j;
	char c='A';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
	{
			printf("%c",c++);
	}
		printf("\n");
	}
	return 0;
}