/*
 Write a program that input & print different type of datatype & varriable. 
*/
#include<stdio.h>
int main()
{
    int num1, num2, num4, num10;
    float num3, num6, num7;
    double num5, num8, num9;
    char ch1, ch2, ch3, ch4;
    printf("Entner the values those varriables:");
    scanf("%d,%d,%d,%d,%f,%f,%f,%lf,%lf,%lf,%c,%c,%c,%c",&num1, &num2, &num4, &num10, &num3, &num6, &num7, &num5, &num8, &num9, &ch1, &ch2, &ch3, &ch4);
    printf("Values are :%d, %d, %d, %d, %.2f, %.2f, %.2f, %.15lf, %.15lf, %.15lf, %c, %c, %c,%c", num10,num2, num4, num10, num3, num6, num7, num5,num8, num9, ch1, ch2, ch3, ch4);
    return 0;
}  