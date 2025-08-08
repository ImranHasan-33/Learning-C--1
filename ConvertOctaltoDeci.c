/*
Write a program that convert Octal to Decimal number System.
*/
#include<stdio.h>
int main()
{
    int octal;
    printf("Enter an Octal Number:");
    scanf("%o",&octal);
    printf("Decimal number is '%d'",octal);
    return 0;
}