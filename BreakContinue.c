//How break and continue keyword work.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<20;i++)
    {
        if(i%3==0)
        continue; //Bypass
        printf("%d\n",i);
        if(i==10)
        break;//Loop terminate
    }
    return 0;
}