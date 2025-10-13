#include <stdio.h> 

int isEven(int a){
    if (a % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    int a;
    printf("Enter an integer please:");
    scanf("%d", &a);

    int result = isEven(a);

    if (result = 1) {
        printf("1");
    } else {
        printf("0");
    }
    
    return 0;
}