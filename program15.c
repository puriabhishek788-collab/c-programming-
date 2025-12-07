#include<stdio.h>
void swap(int *a)
{
    int i , j , z;
    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                z= *(a+j);
                *(a+j)= *(a+j+1);
                *(a+j+1)=z;
            }
        }
    }
}
int main()
{
    int a[10] = {10,9,-1,-10,19,20,5,11,20};
    int i;
    swap(a);
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}