#include <stdio.h>
int main() {
    char c;
    float num1,num2,result;

    printf("Enter an operator (+, -, *, /):");
    scanf("%c",&c);
    printf("Enter 1st numbers:");
    scanf("%f",&num1);
    printf("Enter 2nd numbers:");
	scanf("%f",&num2);
    switch(c)
	{
        case '+':
            result=num1+num2;
            printf("%.2f+%.2f=%.2f\n",num1,num2,result);
            break;
        case '-':
            result=num1-num2;
            printf("%.2f-%.2f=%.2f\n",num1,num2,result);
            break;
        case '*':
            result=num1*num2;
            printf("%.2f*%.2f=%.2f\n",num1,num2,result);
            break;
        case '/':
            if (num2!=0) 
			{
                result=num1/num2;
                printf("%.2f/%.2f=%.2f\n",num1,num2,result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
