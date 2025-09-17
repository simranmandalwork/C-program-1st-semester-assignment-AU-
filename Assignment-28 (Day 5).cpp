#include <stdio.h>
int main() 
{
    float basic_salary, hra, ta, da, gross_salary;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);
    hra = 0.20 * basic_salary;
    ta = 0.10 * basic_salary;
    da = 0.05 * basic_salary;
    gross_salary = basic_salary + hra + ta + da;
    printf("Gross Salary = %.2f\n", gross_salary);
    return 0;
}
