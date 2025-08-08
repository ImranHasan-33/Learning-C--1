/*
Convert Number System.
Write a program that convert Hexadecimal to Octal Number System.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Hexadecimal number: ");
    scanf("%x",&num);
    printf("Octal number is '%o'",num);
    return 0;
}