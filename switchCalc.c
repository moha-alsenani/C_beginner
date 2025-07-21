// Simple calculator using switch statement
#include <stdio.h>

int main() {

char operator;
printf("Choose a sign from the following to apply on your numbers: +, -, /, x ??  ");
scanf("%c", &operator);

double num1, num2;

printf("\nEnter your first number: ");
scanf("%lf", &num1);

printf("\nEnter your Second number: ");
scanf("%lf", &num2);

double result; // to store the calculated value

// switch statement to do the calculation
switch(operator) {
    case '+':
    result = num1 + num2;
    break;

    case '-':
    result = num1 - num2;
    break;

    case '/':
    result = num1 / num2;
    break;

    case 'x':
    result = num1 * num2;
    break;
}

printf("%.2lf", result);

    return 0;
}