#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,r,t,si;

    printf("enter principal amount: \n");
    scanf("%f" , &p);

    printf("enter rate of intrest: \n");
    scanf("%f" , &r);

    printf("enter total intrest (in year): \n");
    scanf("%f" , &t);

    si = (p*r*t) /100;

    printf("simple intrest = %.2f \n", si);

    return 0;
}
