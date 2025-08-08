#include<stdio.h>
int main()
{
    printf("The 'getchar' and 'putchar' functions in C are used for reading and writing single characters from and to the standard input and output, respectively.\nThey are the part of <stdio.h> library.\n");
    char ch;
    printf("Getchar is a function that takes input a character without its format specifier.\nEnter a character:");
    ch=getchar();
    printf("You entered: %c\n",ch);
    printf("Or, We can get output without using format specifier by getchar() function instead of printf().");
    printf("\nYou entered:");
    putchar(ch);
    return 0;
}