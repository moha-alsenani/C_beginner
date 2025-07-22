// sum of odd numbers between 1-100

#include <stdio.h> 

int main() {

int i;
int sum = 0;

for (i = 1; i <= 100; i += 2) {
    sum = sum + i;
}
printf("%d  ", sum);

    return 0;
}