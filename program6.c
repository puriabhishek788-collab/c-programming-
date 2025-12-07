#include<stdio.h>
int main()
{
    float bill , finalBill;
    printf("Enter bill amount: ");
    scanf("%f", &bill);
    if(bill>1000)
    finalBill = bill - (bill * 0.10);
    else
    finalBill = bill;
    printf("Final bill = %f", finalBill);
}