/*
 Write a program that takes input and output a character.
 Write the program using getchar and putchar.
*/
#include<stdio.h>
int main()
{
    int character;
    printf("Purpose: Getchar() reads a single character. Putchar() writes a single character.\n");
    printf("Enter a character:");
    character=getchar();
    printf("You entered:");
    putchar(character);
    return 0;
}