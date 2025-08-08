/*
Write a program that calculate area of triangle when triangle's three hands are given.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Values are:");
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/2;                          //Semiparameter s = (a + b + c)
    area = sqrt(s*(s-a)*(s-b)*(s-c));       //Area = sqrt(s*(s-a)(s-b)*(s-c))
    printf("Area of triangle: %f", area);
    return 0;
}