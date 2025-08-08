#include<stdio.h>
int main()
{
    char name[50];
    printf("STRING: In programming, a string is a datatype used to represent text.\n"); 
    printf("It is a sequence of characters such as letters, digits, symbols treated as a single piece  of data.\n");
    printf("Strings are commonly used to store and manipulate  text in various programming language.\nFormat specifier of strings: percent s.");
    printf("\nEnter your name:");
    scanf("%s",&name);
    printf("Assalamu alaikum %s\n",name);
    printf("When I enter my name 'Imran Hasan', I find output only 'Imran'.\nSanf cannot input after space.");
    printf("\nFor solving this problem we can use 'gets' instead of scanf function.\nIt takes input a line of text.");
    printf("Though printf function does not have these type of limitation. But we can use puts instead of printf.");
    return 0;

}