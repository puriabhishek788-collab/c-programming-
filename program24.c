#include<stdio.h>
int main()
{
    int a[3][3], r , c , sum=0;
    printf("Enter matrix element:\n");
    for(r=0;r<3;r++)
    for(c=0;c<3;c++)
    scanf("%d", &a[r][c]);
    for(r=0;r<3;r++)
    {
        sum+=a[r][r];
    }
    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}