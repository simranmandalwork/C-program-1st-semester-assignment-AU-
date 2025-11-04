#include<stdio.h>
int main()
{
    int arr[100],n,i,evenCount=0,oddCount=0;
    printf("Enter how many elements you want: ");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
	{
        if(arr[i]%2==0)
            evenCount++;
        else
            oddCount++;
    }
    printf("\nTotal even numbers= %d",evenCount);
    printf("\nTotal odd numbers= %d",oddCount);
    return 0;
}
