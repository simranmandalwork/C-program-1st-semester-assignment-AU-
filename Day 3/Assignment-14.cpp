#include <stdio.h>
#include <math.h>  
int main() {
    double num,f,c; 
    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);
    f=floor(num);
    c=ceil(num);
    printf("\nThe number:%.2lf",num);
    printf("\nFloor value:%.2lf",f);
    printf("\nCeiling value:%.2lf",c);
    return 0;
}
