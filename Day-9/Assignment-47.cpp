#include<stdio.h>
int main()
{
    int choice,num,i,count=0;
    printf("MENU\n");
    printf("1. Check whether a number is composite or not\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%d",&num);
            if (num<=1)
            {
                printf("Numbers less than or equal to 1 are neither prime nor composite.\n");
                break;
    }
            for (i=2;i<=num/2;i++)
            {
                if (num%i==0)
                {
                    count++;
                    break;
                }
            }
            if (count>0)
                printf("%d is a Composite number.\n", num);
            else
                printf("%d is NOT a Composite number.\n", num);
            break;
        case 2:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
