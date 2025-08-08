/*
 Write a program that input two integer number and print those numbers.
We can print two integer numbers one by one or print those nummbers together.
*/
#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter the first integer: ");
    scanf("%d",&number1);
    printf("First number is %d\n",number1);
    printf("Enter the second integer:");
    scanf("%d",&number2);
    printf("Second number is %d or\n", number2);
    printf("Numbers are: %d,%d",number1,number2);
    return 0;
}