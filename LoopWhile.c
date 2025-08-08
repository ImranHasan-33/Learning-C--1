/*
It has three past also but not together.
Here initial part declare before loop. Condition part declare inside the first brace of while. Increment part declare at last. 
*/
#include<stdio.h>
int main()
{
    int i=1;  //Initialization
    while(i<=10)  //Condition
    {
        printf("%d\n",i);
        i++;  //Increment
    }
    return 0;
}