/*
Write a program that showing us ASCII value of inputed character.
*/
#include<stdio.h>
int main()
{
    printf("The ASCII(American Standard Code for Information Interchange) value is a numerical representation of characters including letters, digits and symbols. Each character is assigned a unique ASCII value ranging from 0 to 127. List save in tutorial note.");
    printf("\nEnter a character:");
    char c;
    scanf("%c",&c);
    printf("ASCII value for your character:%d",c);
    return 0;
}