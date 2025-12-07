#include<stdio.h>
void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
int main()
{
    int a=10 , b=20;
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}