#include <stdio.h>
#include <string.h>

int main() {

    char word1[50];
    char word2[50];
    char newWord[50];

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("\nEnter second word: ");
    scanf("%s", word2);

    printf("\nLength of word1 is: %lu ", strlen(word1));
    printf("\nLength of word2 is: %lu ", strlen(word2));

    if (strcmp(word1, word2) == 0) {
        printf("\nSame!");
    } else {
        printf("\nDifferent!");
        
        strcpy(newWord, word2);
        strcat(word1, " ");
        strcat(word1, newWord);

        printf("\nFinal result when different: %s ", word1);
    }

}