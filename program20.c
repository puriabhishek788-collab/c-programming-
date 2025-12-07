#include<stdio.h>
int main()  
{
    float basic , hra, da, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    if(basic>20000)
    {
        hra = 0.25 * basic;
        da = 0.50 * basic;
    }
    else
    {
        hra = 0.15 * basic;
        da = 0.30 * basic;
    }
    gross = basic + hra + da;
    printf("Gross Salary = %2f\n", gross);
    return 0;
}