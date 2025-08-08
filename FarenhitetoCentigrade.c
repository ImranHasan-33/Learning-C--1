/*
Write a program that convert temperature Farenhite scale to Celcius scale.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float C, F;
    printf("Enter temperaure in Farenhite:");
    scanf("%f",&F);
    C = (F-32) / 1.8;
    printf("Temperature in Celcius = %f", C);
    return 0;
}