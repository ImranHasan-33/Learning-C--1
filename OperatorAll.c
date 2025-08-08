/*
Write a program that contain almost all operator like Addition, Substruction, Multiplication, Division, Remainder...
*/
#include<stdio.h>
int main()
{
    int num1, num2, Addition, Substruction, Multiplication, Division, Remainder;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    Addition = num1 + num2;
    printf("Result of Addition = %d\n",Addition);
    Substruction = num1 - num2;
    printf("Result of Substruction = %d\n",Substruction);
    Multiplication = num1 * num2;
    printf("Result of Multiplication = %d\n",Multiplication);
    Division = num1 / num2;
    printf("Result of Division = %d\n",Division);
    Remainder = num1 % num2;
    printf("Result of Remainder = %d\n",Remainder); 
    return 0;
}