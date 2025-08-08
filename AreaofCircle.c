/*
Write a program that calculates area of Circle.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float radious, area;
    printf("Enter the redious of circle:");
    scanf("%f",&radious);
    area = M_PI * radious * radious;
    printf("Area of circle = %f", area);
    return 0;
}