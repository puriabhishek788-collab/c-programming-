#include<stdio.h>
#include<math.h>
int main()
{
    int num, sum =0 , temp , r;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp!=0)
    {
        r = temp % 10;
        sum += r*r*r;
        temp /= 10;
    }
    if(sum == num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
        return 0;
}