/* 
It has three part : Initialization,  condition and increment or decrement part.
for(i=1;i<=1;i++)
*/
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++) //Initialization;Condition;Increment
    {
        printf("%d.",i);
        printf("Learning for loop.\n");
        printf("If I wanna print multiple line. I should implement that code inside a curly brace.\n") ;
    }
    return 0;
}
