/*
Write a program that calculates area of Rectangle.
*/
#include<stdio.h>
int main()
{
    float length, width, area;
    printf("Enter length:");
    scanf("%f",&length);
    printf("Enter width:");
    scanf("%f",&width);
    area = length*width;
    printf("Area of triangle: %f",area);
    return 0;
}