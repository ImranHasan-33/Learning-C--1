/*
This is a program to identify a number that is positive or negative or zero. 
*/ 
#include<stdio.h>
int main()
{
    int num; 
    printf("Enter number:");
    scanf("%d",&num);
    if(num>0)
    printf("Number is Positive.");
    else if(num<0)
    printf("Number is Negative.");
    else
    printf("Number is zero.");
    return 0;
}