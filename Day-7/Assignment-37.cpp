#include<stdio.h>
int main()
{
    int i,j,s;
    for (i=0;i<4;i++)
	{
        for (j=1;j<=4-i;j++)
		{
           printf("%d ",j);
        }
        for (s=0;s<2*i-1;s++)
		{
            printf("  ");
        }
        for (j=4-i;j>=1;j--)
		{
        if (j==4-i&&i==0)
		continue; 
        printf("%d ",j);
        }

        printf("\n");
    }
    return 0;
}
