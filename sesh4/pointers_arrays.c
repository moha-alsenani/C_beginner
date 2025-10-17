#include <stdio.h>

int main() {

    int array[5] = {1,2,3,4,5};
    int *ptr = array;

    for(int i =0; i < 5; i++){
        printf("Array's Element at index [%d]: %d \n",i , *(ptr + i));
    }

    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += array[i];
    }
    printf("Sum of array elems: %d \n", sum);

    int *ptr1 = ptr;
    int *ptr2 = ptr + 4;

    while(ptr1 < ptr2) {

    // Swap values
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
        
    ptr1++;  // Move forward
    ptr2--;  // Move backward

    }

    for(int i =0; i < 5; i++){
    printf("Final array index [%d]: %d \n",i , *(array + i)); 
    }

    return 0;

}