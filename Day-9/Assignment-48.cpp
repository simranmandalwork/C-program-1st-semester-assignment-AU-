#include<stdio.h>
int main()
{
    int choice,num,digit,smallest;
    printf("MENU\n");
    printf("1. Find the smallest digit of an integer\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter an integer: ");
            scanf("%d",&num);
            if (num<0)
                num=-num;
            smallest=9;
            while (num>0)
            {
                digit=num%10;
                if (digit<smallest)
                smallest=digit;
                num=num/10;
            }
            printf("Smallest digit is %d\n",smallest);
            break;
        case 2:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }
    return 0;
}

