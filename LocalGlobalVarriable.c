#include <stdio.h>
int a=10;//Global Varriable
int main()
{
    int b=5;//Local Varriable
    printf("Inside the main function a= %d & b=%d\n",a,b);//Here a is a global varriable and b is a local varriable of main function. So a and b both are valid.
    display();
}

void display()
{
    printf("Inside the display functuin a=%d",a);//Though a is a global varriable it is valid everywhere but b is local varriable of main function. So out of the main function varriable b is invalid.
}