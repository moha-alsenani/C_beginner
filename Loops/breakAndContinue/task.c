/* A program that takes an input from the user and prints it if the value is a negative odd number.
• If the input value is positive, end the loop with message, Positive Value.
• If the input value is negative even, skip the value with message Negative Even.
• If the input value is positive, print positive value and break. */

#include <stdio.h>

int main() {

while(1){
int number;
printf("Enter a number: ");
scanf("%d", &number);


if (number > 0) {
    printf("Positive Value");
    break;
}

if ((number % 2) != 0 && number < 0) {
    printf("%d\n", number);
}

if ((number % 2) != 0 && number < 0) {
    continue;
}
printf("Negative Even\n");

}

    return 0;
}