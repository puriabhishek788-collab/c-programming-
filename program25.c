#include<stdio.h>
#include<math.h>
int main()
{
    int num , count;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num ==0)
    count = 1;
    else
    count = (int)log10(abs(num)) + 1;
    printf("Number of digits : %d\n", count);
    return 0;
}