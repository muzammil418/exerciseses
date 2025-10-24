/*
 * Project: Mini Library Catalog -- Generated with ChatGPT
 * Date: 24nd of October, 2025
 * Points: 10

 * Note(s):
 * 	1. The worksheet might have errors or inconsistancies. In such a case, describe the inconsistancy accurately and ask for clarification.
 * 	2. Write meaningful variable names and add comments to ensure the reader can understand your code at a later date.
 * 	3. Do not write code that you don't understand or would not be able to explain yourself.
 *
 * Description:
 *   This program manages a small digital library catalog.
 *   It allows the user to:
 *     - Add new books
 *     - View all books
 *     - Search for a book by title
 *     - Delete a book
 *     - Save and load the catalog from a file
 *
 * Concepts used:
 *   - Structures (for representing books)
 *   - Arrays (to store multiple books)
 *   - Pointers (for passing arrays and manipulating data)
 *   - File I/O (to save and load catalog data)
 *   - Functions (to organize program logic)
 *
 * Implementation rules:
 *   - Implement all functions declared below.
 *   - Keep code clean and modular.
 *   - Do not use any global variables.
 *   - File format and logic are up to you (but must work consistently).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ---------------------------
   CONSTANTS AND DEFINITIONS
   --------------------------- */
#define MAX_BOOKS 100
#define TITLE_LEN 100
#define AUTHOR_LEN 100
#define FILENAME "library.txt"

/* ---------------------------
   STRUCTURE DEFINITIONS
   --------------------------- */

/*
 * Struct: Book
 * Description:
 *   Represents a single book in the catalog.
 */
typedef struct {
    int id;                      // unique identifier for each book
    char title[TITLE_LEN];       // book title
    char author[AUTHOR_LEN];     // author's name
    int year;                    // publication year
    int available;               // 1 = available, 0 = checked out / not available
} Book;

/* ---------------------------
   FUNCTION DECLARATIONS
   --------------------------- */

/*
 * Function: loadBooks
 * -------------------
 * Loads book records from file into the array.
 * Returns the number of books loaded.
 */
int loadBooks(Book *books, int max);

/*
 * Function: saveBooks
 * -------------------
 * Saves all book records to file.
 */
void saveBooks(Book *books, int count);

/*
 * Function: addBook
 * -----------------
 * Prompts user for book details and adds a new book to the array.
 * Updates the count of books.
 */
void addBook(Book *books, int *count);

/*
 * Function: viewBooks
 * -------------------
 * Displays all books in the catalog in a formatted list.
 */
void viewBooks(Book *books, int count);

/*
 * Function: searchBook
 * --------------------
 * Searches for a book by title (partial matches allowed).
 * Prints the matching results.
 */
void searchBook(Book *books, int count);

/*
 * Function: deleteBook
 * --------------------
 * Removes a book from the list based on its ID.
 * Shifts array elements accordingly.
 */
void deleteBook(Book *books, int *count);

/*
 * Function: menu
 * --------------
 * Displays the main menu and returns user's choice.
 */
int menu(void);

/* ---------------------------
   MAIN FUNCTION
   --------------------------- */

int main(void) {
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;

    // Load existing books from file
    count = loadBooks(books, MAX_BOOKS);

    // Main program loop
    do {
        choice = menu();

        switch (choice) {
            case 1: addBook(books, &count); break;
            case 2: viewBooks(books, count); break;
            case 3: searchBook(books, count); break;
            case 4: deleteBook(books, &count); break;
            case 5: saveBooks(books, count); break;
            case 0: 
                printf("Exiting program... Saving data.\n");
                saveBooks(books, count);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}

/* ---------------------------
   FUNCTION IMPLEMENTATION STUBS
   ---------------------------
   TODO: Implement the following functions
   -------------------------------------- */

int loadBooks(Book *books, int max) {
    // TODO: Open the file for reading.
    // TODO: Read each line and fill the books array.
    // TODO: Return number of books loaded.
    return 0;
}

void saveBooks(Book *books, int count) {
    // TODO: Open the file for writing.
    // TODO: Write each book record to the file.
}

void addBook(Book *books, int *count) {
    // TODO: Ask user for book info (title, author, year).
    // TODO: Assign a unique ID (e.g., *count + 1).
    // TODO: Set available = 1.
    // TODO: Store in books array and increment *count.
}

void viewBooks(Book *books, int count) {
    // TODO: Print all books in a neat table format.
    // TODO: Show ID, Title, Author, Year, and Availability.
}

void searchBook(Book *books, int count) {
    // TODO: Ask for a search keyword.
    // TODO: Compare keyword with each book title (case-insensitive optional).
    // TODO: Print matches.
}

void deleteBook(Book *books, int *count) {
    // TODO: Ask for book ID to delete.
    // TODO: Find the book in array.
    // TODO: Shift subsequent elements left.
    // TODO: Decrease *count.
}

int menu(void) {
    int choice;
    printf("\n===== Library Catalog Menu =====\n");
    printf("1. Add Book\n");
    printf("2. View All Books\n");
    printf("3. Search Book by Title\n");
    printf("4. Delete Book\n");
    printf("5. Save Catalog to File\n");
    printf("0. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    return choice;
}
