/*
Write a program that convert Octal to Hexadecimal Number System.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Octal number: ");
    scanf("%o",&num);
    printf("Hexadecimal number is '%x'",num);
    return 0;
}