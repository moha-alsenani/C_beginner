#include <stdio.h>
#include <math.h>

int main() {

    double number = 0;

    printf("Enter a number: ");
    scanf("%lf", &number);

    // square-root of number:
    printf("Square-root of %.2f is: %.2f \n",number, sqrt(number));

    // number squared:
    printf("The square of %.2f is: %.2f \n",number, pow(number, 2));

    // Ceiling of number:
    printf("Ceiling of %.2f is: %.2f \n",number, ceil(number));

    // Floor of number:
    printf("Floor of %.2f is: %.2f \n",number, floor(number));

    return 0;
}