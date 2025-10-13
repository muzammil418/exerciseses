#include <stdio.h>

/*
103. book structure management
create a structure named book to store book details like title, author, and price.
write a c program to input details for three books, find the most expensive
and the lowest priced books, and display their information.
*/

struct book {
    char title[60];
    char author[60];
    int price;
};

int main() {
    struct book b1, b2, b3;

    // --- input for books ---
    printf("enter the title, author and price of book 1: ");
    scanf("%s %s %d", b1.title, b1.author, &b1.price);

    printf("enter the title, author and price of book 2: ");
    scanf("%s %s %d", b2.title, b2.author, &b2.price);

    printf("enter the title, author and price of book 3: ");
    scanf("%s %s %d", b3.title, b3.author, &b3.price);

    // find highest book
    if (b1.price > b2.price && b1.price > b3.price) {
        printf("\nmost expensive book:\n");
        printf("title: %s\nauthor: %s\nprice: %d\n", b1.title, b1.author, b1.price);
    }
    else if (b2.price > b1.price && b2.price > b3.price) {
        printf("\nmost expensive book:\n");
        printf("title: %s\nauthor: %s\nprice: %d\n", b2.title, b2.author, b2.price);
    }
    else {
        printf("\nmost expensive book:\n");
        printf("title: %s\nauthor: %s\nprice: %d\n", b3.title, b3.author, b3.price);
    }

    // find lowest price
    if (b1.price < b2.price && b1.price < b3.price) {
        printf("\nlowest priced book:\n");
        printf("title: %s\nauthor: %s\nprice: %d\n", b1.title, b1.author, b1.price);
    }
    else if (b2.price < b1.price && b2.price < b3.price) {
        printf("\nlowest priced book:\n");
        printf("title: %s\nauthor: %s\nprice: %d\n", b2.title, b2.author, b2.price);
    }
    else {
        printf("\nlowest priced book:\n");
        printf("title: %s\nauthor: %s\nprice: %d\n", b3.title, b3.author, b3.price);
    }

    return 0;
}
