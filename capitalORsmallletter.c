/*
Write a program that define a letter is that a Capital letter or small letter.
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter:");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    printf("This letter is a Small letter");
    else if(ch>='A'&&ch<'Z')
    printf("This letter is a Capitl letter");
    else 
    printf("Your input is not a letter");
    return 0;
}