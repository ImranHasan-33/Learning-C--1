/*
This is a program that make result with gpa points by marks.
*/

#include <stdio.h>
int main()
{
    float marks;
    printf("Enter your marks:");
    scanf("%f",&marks);
    if(marks>100||marks<0)
    printf("Invalid mark");
    else if(marks>=80)
    {
        printf("Result: A+\n");
        printf("GPA-5.00"); 
    }
    else if(marks>=70)
    {
        printf("Result: A\n");
        printf("GPA-4.00");
    }
    else if(marks>=60)
    {
        printf("Result: A-\n");
        printf("GPA-3.50");
    }
    else if(marks>=50)
    {
        printf("Result: B\n");
        printf("GPA-3.00");
    }
    else if(marks>=40)
    {
        printf("Result: C\n");
        printf("GPA-2.00");
    }
    else if(marks>=33)
    {
        printf("Result: D\n");
        printf("GPA-1.00");
    }
    else
    {
        printf("Result: F\n");
        printf("GPA-0.00");
    }
    
    
    return 0;
}