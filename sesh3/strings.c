#include <stdio.h>

int main() {

    char firstName [50];
    printf("Enter your first name: ");
    scanf("%s", firstName);

    char lastName [50];
    printf("\nEnter your last name: ");
    scanf("%s", lastName);

    char fullName [100];
    int index = 0;  // Track position in fullName


    // Copy firstName into fullName
    for(int i = 0; firstName[i] != '\0'; i++) {
        fullName[index] = firstName[i];
        index++;
    }

    // Add a space
    fullName[index] = ' ';
    index++;

    // Copy lastName into fullName
    for(int i = 0; lastName[i] != '\0'; i++) {
        fullName[index] = lastName[i];
        index++;
    }


    // Add null terminator
    fullName[index] = '\0';
    printf("\n full name: %s", fullName);

    return 0;
}