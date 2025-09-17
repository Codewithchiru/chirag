#include <stdio.h>

void swapValue(int a , int b)  {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("inside swapValue - a: %d, b: %d\n", a, b);
}

int main() {
int a , b;

printf("enter two number: ");
scanf("%d %d" , &a, &b);

printf("before swapVale - a: %d, b: %d\n" , a , b);
swapValue(a,b);
printf("after swapValue - a: %d, b: %d\n" , a, b);

return 0;
}
