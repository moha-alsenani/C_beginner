#include <stdio.h>

int main() {

while(1){
int number;
printf("enter a number: ");
scanf("%d", &number);

if (number <= 0) {
    printf("STOP!");
    break;
}

if ((number % 2) != 0) {
    continue;
}

printf("%d\n", number);

}

    return 0;
}