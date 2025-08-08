#include <stdio.h>
int main ()
{
double num_1, num_2;
char sign;
    scanf ("%lf", &num_1);
    scanf ("%c", &sign);
    scanf("%lf",&num_2);
    if (sign == '+'){
        printf("%lf", num_1+num_2);
    }

    if else(sign == 'x'){
        printf("%lf", num_1*num_2);
    }
    if else(sign == '/'){
        printf("%lf", num_1/num_2);
    }
    return 0;
}
