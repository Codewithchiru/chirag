#include <stdio.h>

void swapReference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("inside swapRefrence - x: %d, y: %d\n" , *x, *y);

}

int main() {
    int a , b;

    printf("enter two number: ");
    scanf( "%d %d", &a, &b);

    printf("before swapREFRENCE - a: %d, b: %d\n", a, b);
    swapReference(&a, &b);
    printf("after swapRefrence - a: %d, b: %d\n", a, b);

    return 0 ;

}
