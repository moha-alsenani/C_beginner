#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* only used in string related operations */
typedef struct String {
    char *str;
} string;

char *input(FILE *fp, int size, int has_space) {
    int actual_size = 0;
    char *str = malloc(size * sizeof(char));
    char ch;

    if (!str) {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }

    if (has_space == 1) {
        while ((ch = fgetc(fp)) != EOF && ch != '\n') {
            str[actual_size++] = ch;
            if (actual_size >= size) {
                size *= 2;
                str = realloc(str, size * sizeof(char));
                if (!str) {
                    fprintf(stderr, "Memory reallocation failed!\n");
                    exit(1);
                }
            }
        }
    } else {
        while ((ch = fgetc(fp)) != EOF && ch != '\n' && ch != ' ') {
            str[actual_size++] = ch;
            if (actual_size >= size) {
                size *= 2;
                str = realloc(str, size * sizeof(char));
                if (!str) {
                    fprintf(stderr, "Memory reallocation failed!\n");
                    exit(1);
                }
            }
        }
    }

    str[actual_size] = '\0';
    return str;
}
/* only used in string related operations */

/*
 * Function to count number of differing bits between two integers
 */
int flippedBits(int num1, int num2) {
    int answer = 0;

    // XOR the two numbers to find differing bits
    int xor_result = num1 ^ num2;

    // Count number of 1 bits in xor_result
    while (xor_result != 0) {
        if (xor_result & 1)
            answer++;
        xor_result >>= 1;
    }

    return answer;
}

int main() {
    int num1, num2;

    printf("Enter two integers separated by space: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        fprintf(stderr, "Invalid input!\n");
        return 1;
    }

    int result = flippedBits(num1, num2);
    printf("Number of differing bits: %d\n", result);

    return 0;
}
