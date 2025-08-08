/*
Write a program that show a character for its ASCII value.
*/
#include<stdio.h>
int main()
{
    printf("The ASCII(American Standard Code for Information Interchange) value is a numerical representation of characters including letters, digits and symbols. Each character is assigned a unique ASCII value ranging from 0 to 127. List save in tutorial note.");
    int i;
    printf("\nEnter ant ASCII Value: ");
    scanf("%d",&i);
    printf("The charcter for your Ascii value: '%c'",i);
    printf("'A-Z'=65-90 & 'a-z'=97-122");
    return 0;
}