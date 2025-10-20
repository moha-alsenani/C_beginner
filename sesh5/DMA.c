// Here I'll practice dynamic memo allocation 

#include <stdio.h>
#include <stdlib.h>

int main() {

    int students;
    printf("How many students you want to enter? ");
    scanf("%d", &students);

    // memo allocated
    int *grades = (int*)malloc(students * sizeof(int));

    // checking if memo allocation succeeded
    if (grades == NULL) {
        printf("Memo not allocated stop!\n");
        return 1;
    }
    printf("Memo allocation done!\n");

    // taking grades in
    for (int i=0; i < students; i ++) {
    printf("Enter the %d's student grade from 0-100\n", i+1);
    scanf("%d", &grades[i]);
    }

    //calculating grades avg
    int sum = 0;
    for(int i = 0; i < students; i++) {
        sum += grades[i];
    }
    float gradesAvg = sum/students;
    printf("Avg grades is: %2f \n", gradesAvg);

    // seeing how many scored above avg
    int aboveAvg =0;
    for(int i = 0; i < students; i++) {
        if (grades[i] > gradesAvg) {
            aboveAvg++;
        }
    }
    printf("students above average = %d \n", aboveAvg);

// free memo
    free(grades);
    
    return 0;
}