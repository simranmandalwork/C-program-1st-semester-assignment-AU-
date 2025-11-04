#include<stdio.h>
int main()
{
    int arr[100],n,i,key,found=0;
    printf("Enter how many elements you want :");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
	{
     scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
	{
        if(arr[i]==key)
		{
            printf("\n%d found at position %d.\n",key,i+1);
            found=1;
            break;
        }
    }
    if(found==0) {
        printf("\n%d not found in the array.\n",key);
    }
    return 0;
}
