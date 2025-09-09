#include<stdio.h>
int main()
{
    int units;
    float bill = 0;
    printf("Enter the units consumed: ");
    scanf("%d",&units);
    switch(units<=100)
	{
        case 1:
            bill=units*5;
            break;
        case 0:
            switch(units <= 200)
			{
                case 1:
                    bill=(100*5)+((units-100)*7);
                    break;
                case 0:
                    bill=(100*5)+(100*7)+((units-200)*10);
                    break;
            }
            break;
    }
    printf("\nTotal Electricity Bill = Rs. %.2f", bill);
    return 0;
}
