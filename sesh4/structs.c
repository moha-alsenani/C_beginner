#include <stdio.h>
#include <string.h>

struct Book {
    char title[35];
    char author[35];
    int pages;
    float price;
};  // Don't forget semicolon!

// Function to print a book
void printBook(struct Book *ptr) {
    printf("Title: %s, Author: %s, Pages: %d, Price: %.2f\n", ptr->title, ptr->author, ptr->pages, ptr->price);
}

int main() {
    struct Book books[3] = {  // Need = here
        {"Book1", "Moho", 100, 15.5},
        {"Book2", "Sola", 105, 17.5},
        {"Book3", "Hola", 110, 20.5}
    };

    // Print all books
    printf("All Books:\n");
    for(int i = 0; i < 3; i++) {
        printBook(&books[i]);  // Pass address of each book
    }

    // Find most expensive book
    struct Book *mostExpensive = &books[0];
    for(int i = 1; i < 3; i++) {
        if(books[i].price > mostExpensive->price) {
            mostExpensive = &books[i];
        }
    }

    printf("\nMost Expensive Book:\n");
    printBook(mostExpensive);

    return 0;
}