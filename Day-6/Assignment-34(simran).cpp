#include <stdio.h>
int main()
{
    int i,n,a=0,b=1,x,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The Fibonacci series up to %d terms is: ", n);
    for (i=1;i<=n;i++)
	{
        printf("%d ", a);
        sum=a+sum;
        x=a+b;
        a=b;
        b=x;
    }
    printf("\nThe sum of the Fibonacci series is: %d\n",sum);
    return 0;
}
