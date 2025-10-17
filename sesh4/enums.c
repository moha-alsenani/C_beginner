#include <stdio.h>

enum Months {
    JANUARY = 1,    
    FEBRUARY = 2,
    MARCH = 3,
    APRIL = 4,
    MAY = 5,
    JUNE = 6,
    JULY = 7,
    AUGUST = 8,
    SEPTEMBER = 9,
    OCTOBER = 10,
    NOVEMBER = 11,
    DECEMBER = 12
};

enum Season {
    WINTER,
    SPRING,
    SUMMER,
    FALL
};

int main() {

    int monthNumber;
    printf("Please enter the current month number 1-12: ");
    scanf("%d", &monthNumber);

    enum Months month = monthNumber;

    switch(month) {
        case JANUARY:
            printf("It's JANUARY\n");
            break;
        case FEBRUARY:
            printf("It's February\n");
            break;
        case MARCH:
            printf("It's MARCH\n");
            break;
        case APRIL:
            printf("It's April\n");
            break;
        case MAY:
            printf("It's MAY\n");
            break;
        case JUNE:
            printf("It's June\n");
            break;
        case JULY:
            printf("It's July\n");
            break;
        case AUGUST:
            printf("It's August\n");
            break;
        case SEPTEMBER:
            printf("It's September\n");
            break;
        case OCTOBER:
            printf("It's October\n");
            break;
        case NOVEMBER:
            printf("It's November\n");
            break;
        case DECEMBER:
            printf("It's December\n");
            break;
    }

    if(month == DECEMBER || month == JANUARY || month == FEBRUARY) {
        printf("and it's Winter!\n");
    } else if(month == MARCH || month == APRIL || month == MAY) {
        printf("and it's Spring!\n");
    } else if(month == JUNE || month == JULY || month == AUGUST) {
        printf("and it's Summer!\n");
    } else {
        printf("and it's Fall!\n");
    }

    return 0;
}