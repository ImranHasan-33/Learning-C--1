/*
 Write a program that will print a floating, double, number and character
*/
#include<stdio.h>
int main()
{
    float num1=24.4;
    double num2=34.324556769667390;
    char ch1='s';
    char ch2='a',ch3='d';
    int num3=456;
    printf("Numbers are: %.1f, %.15lf ,%.6d and \nCharacters are %c,  %c, %c",num1,num2,num3,ch1,ch2,ch3);
    printf("\nHere percentf, percentlf, percentc, percentd are format specifier.");
    printf("\npercentf for float, percentlf for double, percentc for character, percentd for integer");
    printf("\nWe can use .number(Ex.: .1,.5, .12 etc) between percent and f/lf to    visible some definite disit after desimal(.)");
}