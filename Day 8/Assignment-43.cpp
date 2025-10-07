#include<stdio.h>
int main()
{
    float w,c;
    printf("Enter the weight of the parcel (in Kg): ");
    scanf("%f",&w);

    if (w<=10)
        c=w*30;
    else if (w<=30)
        c=(10*30)+(w-10)*20;
    else
        c=(10*30)+(20*20)+(w-30)*15;
    printf("Total charge for the parcel = Rs. %.2f\n",c);
    return 0;
}
