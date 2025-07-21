#include <stdio.h>

int main() {

int number;

printf("Enter a num from 1 to 7: ");
scanf("%d", &number);

switch(number) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    printf("it's A Weekday!");
    break;

    case 1:
    case 7:
    printf("it's the Weekend!");
    break;

    default:
    printf("invalid input!");
    
}

    return 0;
}