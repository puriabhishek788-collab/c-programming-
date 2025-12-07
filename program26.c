#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    switch(age)
    {
        case 18:
        printf("You are 18 years old.\n");
        break;
        case 20:
        printf("You are 20 years old.\n");
        break;
        case 22:
        printf("You are 22 years old.\n");
        break;
        default:
        printf("Your age is neither 18, 20 nor 22 years old.\n");
    break;
    }
    return 0;
}