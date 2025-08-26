#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2, realPart, imagPart;

    printf("Enter coefficient a:");
    scanf("%f", &a);
    printf("Enter coefficient b:");
    scanf("%f", &b);
    printf("Enter coefficient c:");
    scanf("%f", &c);
    d = b * b - 4 * a * c;
    if (d > 0)
	{
        root1 = (-b+sqrt(d))/(2*a);
        root2 = (-b-sqrt(d))/(2*a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else if (d==0)
	{
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } 
    else 
	{
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
