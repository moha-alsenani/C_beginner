#include <stdio.h>

void divideAndRemainder(int x, int y, int *quote, int *rem) {
    *quote = x / y;    // Store quotient
    *rem = x % y;      // Store remainder
}

int main() {
    int quote, rem;
    
    divideAndRemainder(17, 5, &quote, &rem);
    
    printf("17 / 5 = %d remainder %d\n", quote, rem);
    
    return 0;
}