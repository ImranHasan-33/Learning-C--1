/*
Write a function that print addition of 4 integer number.
*/
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,Ans;
    printf("First number is:");
    scanf("%d",&n1);
    printf("Second number is:");
    scanf("%d",&n2);
    printf("Third number is:");
    scanf("%d",&n3);
    printf("Fourth number is:");
    scanf("%d",&n4);
    Ans=n1+n2+n3+n4;
    printf("Total: %d",Ans);
    return 0;
}
