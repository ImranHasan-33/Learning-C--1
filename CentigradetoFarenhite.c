/*
Write a program that convert temperature ceclciuas scale to farenhite scale.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float C, F;
    printf("Enter temperaure in Celdius:");
    scanf("%f",&C);
    F = C * 1.8 + 32;
    printf("Temperature in Farenhite = %f", F);
    return 0;
}