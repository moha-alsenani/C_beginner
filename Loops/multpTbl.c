// multiplication table using a while loop

#include <stdio.h>

int main() {

int number;
printf("Enter a number hun: ");
scanf("%d", &number);

int count = 1;

while (count <= 10) {
    int product = count * number;
    printf("%d \n", product);
    count = count + 1;
}

    return 0;
}