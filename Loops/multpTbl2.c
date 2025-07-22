// multiplication table using do while loop but reversed

#include <stdio.h>

int main() {

int number;

printf("Enter a number hun: ");
scanf("%d", &number);

int count = 10;

do {
int product = count * number;
printf("%d x %d = %d \n", number, count, product);
count = count - 1;
} while(count >= 1);

    return 0;
}