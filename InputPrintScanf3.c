/*
 Write a program that input & print more than two integer numbers.
 In this program we input & print those numbers together. 
*/
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three integers:");
    scanf("%d,%d,%d",&num1,&num2,&num3);
    printf("Three integers are: %d,%d,%d" ,num1,num2,num3);
    return 0;
}