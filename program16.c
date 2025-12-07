#include<stdio.h>
#include<string.h>
struct Student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct Student s1, s2;
    strcpy(s1.name, "ABHISHEK");
    s1.roll = 1040;
    s1.marks = 75;
    s2 = s1;
    printf("\n %s %d %f", s2.name, s2.roll, s2.marks);
    return 0;
}