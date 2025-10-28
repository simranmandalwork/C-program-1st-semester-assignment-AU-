#include<stdio.h>
int main()
{
    int n=4,i,j,s;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
            printf("%d",j);
        if (i<n)
        {
            for (s=1;s<=(2*(n-i)-1);s++)
                printf(" ");
        }
        for (j=i;j>=1;j--)
        {
            if (i==n&&j==n) 
                continue;
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

