// intro to loops

#include <stdio.h>

int main() {

int num = 3;

printf("Enter a number: ");
scanf("%d", &num);

while ( num < 5 ){
    printf("num is less than 5 \n");
    num = num + 1;
}
    return 0;
}