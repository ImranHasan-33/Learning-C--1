/*
 Write a program takes input and show one's name with greeting.
 Use gets & puts function.
*/
#include <stdio.h>
int main()
{
    char name[50];
    printf("gets() & puts() function do not require Format varriable, inverted comma like scanf() & printf().\n");
    printf("In the case of gets() & puts(), we just write varriable name into first bracket.");
    printf("\nEnter your name: ");
    gets(name);
    printf("Assalamu alaikum: ");
    puts(name);
    printf("Now I input my name 'Imran Hasan' and get same outpt with greetings.\nBut it is not a safe input process.");
    return 0;
}
