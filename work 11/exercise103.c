#include <stdio.h>

// 103. Book Structure Management
// Create a structure named Book to store book details like title, author, and price.
// Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.

struct book {
    char title[500];
    char author[500];
    float price;
};

int main() {
    struct book b1, b2, b3;

    // Input 3 books
    printf("Enter the first book title, author, and price:\n");
    scanf("%s %s %f", b1.title, b1.author, &b1.price);

    printf("Enter the second book title, author, and price:\n");
    scanf("%s %s %f", b2.title, b2.author, &b2.price);

    printf("Enter the third book title, author, and price:\n");
    scanf("%s %s %f", b3.title, b3.author, &b3.price);

    // Find the most expensive book
    printf("\nMost Expensive Book:\n");
    if (b1.price > b2.price && b1.price > b3.price) {
        printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", b1.title, b1.author, b1.price);
    } 
    else if (b2.price > b1.price && b2.price > b3.price) {
        printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", b2.title, b2.author, b2.price);
    } 
    else {
        printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", b3.title, b3.author, b3.price);
    }

    // Find the lowest priced book
    printf("\nLowest Priced Book:\n");
    if (b1.price < b2.price && b1.price < b3.price) {
        printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", b1.title, b1.author, b1.price);
    } 
    else if (b2.price < b1.price && b2.price < b3.price) {
        printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", b2.title, b2.author, b2.price);
    } 
    else {
        printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", b3.title, b3.author, b3.price);
    }

    return 0;
}
