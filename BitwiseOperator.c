/*Bitwise operator works with binary data mean bit/byte.
It is used for different logical operation such as AND, OR, NOT, EXOR,Left Shift,Right Shift etc.
Can only used on integrals,don't work with float.
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a, &b);
    c=a&b;
    printf("a&b = %d\n",c);
    c=a|b;
    printf("a|b = %d\n",c);
    c=a^b;
    printf("a^b = %d\n",c);
    return 0;
    
}