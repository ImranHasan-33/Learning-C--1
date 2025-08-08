/* This is a program that print the rules of double or multiple line comment.
   How to write double line or multiple line comment.
   Learner: MD. Imran Hasan Akanda
 */
#include<stdio.h>
int main()
{
    printf("Multiple line comment starts with /* sign and ends/terminates with */ sign.");
     printf("\nNormally, In a single line comment we can write just a line as a comment.");
      printf("\nIf we press 'ENTER' button and go to the next line , then our program will show error.");
       printf("\nBut in a multiple line comment we can write many line as comment whatever we want inside multiple line comment's starting & ending sign. ");
        printf("\nIn C, you can't have one comment within another one, like: \n /* This is a comment\n                 /* This is another comment*/ \n                                       A syntax error */");
    return 0;
}    