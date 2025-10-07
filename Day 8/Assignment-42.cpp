#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area,perimeter;
    printf("Enter the 1st side: ");
    scanf("%f",&a);
    printf("Enter the 2nd side: ");
    scanf("%f",&b);
    printf("Enter the 3rd side: ");
    scanf("%f",&c);
    if (a+b>c&&a+c>b&&b+c>a)
	 {
        perimeter=a+b+c;
        s=perimeter/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        if (area==perimeter)
            printf("Equable Triangle\n");
        else
            printf("Not Equable Triangle\n");
    } 
    else {
        printf("Invalid Triangle\n");
    }
    return 0;
}

