#include<stdio.h>
void increment(int x)
{
    x = x + 1;
    printf("Inside function(incremented value): %d\n", x);
}
int main()
{
    int a = 7;
    printf("Before increment: %d\n", a);
    increment(a);
    printf("After increment: %d\n", a);
    return 0;
}