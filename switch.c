/* This is my first commit, after spending some time getting myself familiar with all the basics. 
I'm now getting into switch statements after covering if, if else and ternary operators. */
#include <stdio.h>

int main() {

int number;

printf("Enter a num from 1 to 7: ");
scanf("%d", &number);

switch(number) {
    case 1:
    printf("it's Sunday!");
    break;

    case 2:
    printf("it's Monday!");
    break;

    case 3:
    printf("it's Tuesday!");
    break;

    case 4:
    printf("it's Wednesday!");
    break;

    case 5:
    printf("it's Thursday!");
    break;

    case 6:
    printf("it's Friday!");
    break;

    case 7:
    printf("it's Saturday!");
    break;

    default:
    printf("invalid input!");
    
}

    return 0;
}
