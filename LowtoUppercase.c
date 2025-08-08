/*
Write a program that convert a lowercase letter to uppercase letter without using library function.
*/
#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter:");
    scanf("%c", &lower);
    printf("Uppercase letter is: '%c'\n",lower-32);
    printf("Difference between ASCII value of lowercase & uppercase letter is 32.EX:a=97,A=65\nSo, we minus 32 from lower case.");
    return 0;
}