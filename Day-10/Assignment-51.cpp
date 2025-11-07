#include<stdio.h>
int main()
{
    int i,j,n=3,num=1;
    for (i=1;i<=n;i++)
	{
        for (j=1;j<=n;j++)
		{
            if (i==1)
                printf("%d",j);
            else if (i==2)
			{
                if (j==1)
				printf("8");
                else if (j==2)
				printf("9");
                else
				printf("4");
            }
			else if (i==3)
			{
                printf("%d",8-j);
            }
        }
        printf("\n");
}
}
