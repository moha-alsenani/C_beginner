#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;

    int *ptr1;
    ptr1 = &a;

    int *ptr2;
    ptr2 = &b;

    printf("Value of a: %d \n", a);
    printf("Value of address: %p \n", ptr1);

    printf("Value of b: %d \n", b);
    printf("Value of address: %p \n", ptr2);

    // swap values
    int tempo = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tempo;

    printf("\n Final result a - %d / b - %d ", a, b);
}