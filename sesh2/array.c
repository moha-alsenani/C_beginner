#include <stdio.h> 

int main() {

int array[5];

// adding ints to array from user input
for (int i = 0; i < 5; i++) {
    printf("Please enter an integer to insert into array: ");
    scanf("%d", &array[i]);
}

// sum of elements
int sum = 0;
for (int i = 0; i < 5; i++) {
    sum = sum + array[i];
}

printf("Sum of array elements %d \n", sum);

// finding largest
int largest = array[0];
for (int i = 0; i < 5; i++) {
    if (array[i] > largest) {
        largest = array[i];
    } 
}
printf("largest is: %d", largest);

}