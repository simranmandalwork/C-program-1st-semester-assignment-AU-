#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, root1, root2;
    printf("\nEnter the coefficient of a: ");
    scanf("%f", &a);
    printf("\nEnter the coefficient of b: ");
    scanf("%f", &b);
    printf("\nEnter the coefficient of c: ");
    scanf("%f", &c);
    d=b*b-4*a*c;
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    printf("\nRoot1 of a quadratic equation is: %.2f", root1);
    printf("\nRoot2 of a quadratic equation is: %.2f", root2);
    return 0;
}
