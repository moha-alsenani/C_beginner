#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct String {
    char *str;
} string;

// Function to read input dynamically from stdin
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

// Function to count unaffected characters when the string is reversed
int unaffectedChar(string dataStream) {
    int answer = 0;
    int len = strlen(dataStream.str);

    if (len == 0) {
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (dataStream.str[i] == dataStream.str[len - 1 - i]) {
            answer++;
        }
    }

    return answer;
}

int main() {
    string dataStream;

    // Input string (with spaces allowed)
    printf("Enter a string: ");
    dataStream.str = input(stdin, 200, 1);

    int result = unaffectedChar(dataStream);
    printf("Number of unaffected characters: %d\n", result);

    free(dataStream.str);
    return 0;
}
