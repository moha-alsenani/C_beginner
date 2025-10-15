#include <stdio.h>

int main() {

    int matrix [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Get user input to where to put the 0 in
    int x, y;  
    printf("\nEnter row (0-2): ");
    scanf("%d", &x);  
    
    printf("Enter column (0-2): ");
    scanf("%d", &y);  

    matrix[x][y] = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}