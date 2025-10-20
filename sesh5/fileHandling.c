#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name please: ");
    scanf("%s", name);

    int age;
    printf("Enter your age please: ");
    scanf("%d", &age);

    // 1. WRITE to file
    FILE *file = fopen("user_info.txt", "w");  // Quotes around "w"!
    
    if (file == NULL) {
        printf("File creation failed!\n"); 
        return 1;
    }
    
    fprintf(file, "Name: %s\n", name);  // Write name
    fprintf(file, "Age: %d\n", age);     // Write age
    fclose(file);  // Close after writing!
    
    // 2. READ from file
    file = fopen("user_info.txt", "r");  // Reopen in read mode
    
    if (file == NULL) {
        printf("File opening failed!\n");
        return 1;
    }
    
    printf("\n--- Reading from file ---\n");
    char line[100];
    while(fgets(line, 100, file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    
    // 3. APPEND to file
    file = fopen("user_info.txt", "a");  // Open in append mode
    
    if (file == NULL) {
        printf("File opening failed!\n");
        return 1;
    }
    
    fprintf(file, "DATA VERIFIED!\n");
    fclose(file);
    
    // 4. READ entire file again
    file = fopen("user_info.txt", "r");
    
    if (file == NULL) {
        printf("File opening failed!\n");
        return 1;
    }
    
    printf("\n--- Reading entire file ---\n");
    while(fgets(line, 100, file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    
    return 0;
}