#include <stdio.h>

int sumOfNumbers(int n) {
    if (n == 1) {
        return 1;
    } 

    return n + sumOfNumbers(n-1);
}

int main() {
    int result = sumOfNumbers(6);
    printf("Sum is: %d", result);
    return 0;
}