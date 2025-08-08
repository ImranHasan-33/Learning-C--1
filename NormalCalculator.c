#include<stdio.h>
int main()
{
    double num1, num2;
    char sign;
    scanf("%lf",&num1);
    scanf("%c",&sign) ;
    scanf("%lf",&num2);
    if (sign == '+') {
        printf("%lf", num1+num2 );
    }
    if else (sign == '-') {
        printf ("%lf", num1-num2);
    }
    if else (sign =='*'  ) {
        printf("lf",num1 * num2);
    }
    if else (sign == '/'){
        printf("%lf",num1/num2);
    }


}