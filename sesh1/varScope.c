#include <stdio.h>

int counter = 0;

void increment () {
    int localCounter = 10;

    localCounter = localCounter + 1;  // Increment local
    counter = counter + 1;  // Increment global

    printf("Local: %d, Global: %d\n", localCounter, counter);
}

int main () {

    increment();
    increment();

    printf("final global counter %d \n", counter);

    return 0;
}