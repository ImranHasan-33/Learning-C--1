/*
Write a program that takes three integers and display their sum & Average.
*/
#include<stdio.h>
int main()
{
    printf("Average may be a float number. So, we should keep it in float varriable.\n");
    printf("Division between two integer give result another integer but between int & float result a float number & between float & double result a double number.\n");
    printf("So sometimes we should change datatype of varriable such as int sum to (float)sum. It is called type casting.\n");  
    int n1,n2,n3,sum;
    float avg;
    printf("Enter three number: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    sum = n1 + n2 + n3;
    printf("Sum = %d\n",sum);
    avg = (float)sum / 3;           //Type casting---Change datatype of same varriable.   
    printf("Avarage = %f",avg);
    return 0;
}