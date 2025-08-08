/*
Write a program that calculates Area of Tringle.
*/
#include<stdio.h>
int main()
{
    float base, height, area;
    printf("Enter Base:");
    scanf("%f",&base);
    printf("Enter Height:");
    scanf("%f",&height);
    area = (float)1/2 * base * height;  //Type casting. Because 1,2 both are integers. But we need float.
    printf("Area : %.2f",area);
}