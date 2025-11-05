#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#define MAX_BOOKS 100
#define FILE_NAME "library.txt"

typedef struct {
    int id;
    char title[100];
    char author[100];
    int year;
    int available; // 1 = available, 0 = not available
} Book;

// Function prototypes
int loadBooks(Book *books, int max){
	//open file and check if its emty or not
	FILE *fp = fopen("library.txt", "r");
	if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
	
	int count = 0;
    char line[256];

    while (count < max && fgets(line, sizeof(line), fp)) {
        sscanf(line, "%d|%[^|]|%[^|]|%d|%d",
            &books[count].id,
            books[count].title,
            books[count].author,
            &books[count].year,
            &books[count].available);

        count++;
    }

    fclose(fp);
    return count; // return howmany books loade
}

void saveBooks(Book *books, int count) {
	char confirm;

    printf("Do you want to save changes to file? (y/n): ");
    scanf(" %c", &confirm);

    if (confirm != 'y' && confirm != 'Y') {
        printf("Save canceled! Data is only in memory.\n");
        return;
    }
	
	//open file
	FILE *fp = fopen("library.txt", "w");
	if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
	
	//loop overwrite things
	for (int i = 0; i < count; i++) {
		//store books in file
        fprintf(fp, "%d|%s|%s|%d|%d\n",
            books[i].id,
            books[i].title,
            books[i].author,
            books[i].year,
            books[i].available);
    }

    fclose(fp);
	
}

void addBook(Book *books, int *count){

	//take input
    printf("Enter ID: ");
    scanf("%d", &books[*count].id);

    printf("Enter Title: ");
    scanf(" %[^\n]", books[*count].title);

    printf("Enter Author: ");
    scanf(" %[^\n]", books[*count].author);

    printf("Enter Year: ");
    scanf("%d", &books[*count].year);
	
    books[*count].available = 1; // New book is available
	
	//add 1 in count
    (*count)++;
	
	//call function to save the book in file
    saveBooks(books, *count);// add book in file

    printf("book added successfully\n");
	
}

void viewBooks(Book *books, int count){
	//check the books is loade in memory or not
	 if (count == 0) {
        printf("No books available!\n");
        return;
    }
	
	//print all the book avalible in memory
    printf("\n==== Library Books ====\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
        printf("Available: %s\n", books[i].available ? "Yes" : "No");
        printf("----------------------\n");
    }
	
}

void searchBook(Book *books, int count){
	//creat a variable to store title in character array
	char searchTitle[100];
	//take input of title to match it
    printf("Enter the title to search: ");
    scanf(" %[^\n]", searchTitle);
	
	//loop to check all books
    for (int i = 0; i < count; i++) {
        if (strcasecmp(books[i].title, searchTitle) == 0) { // match the both string
            printf("\nBook Found:\n");
            printf("ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            printf("Available: %s\n", books[i].available ? "Yes" : "No");
            printf("----------------------\n");
        }
    }

}
void deleteBook(Book *books, int *count){
	  if (*count == 0) {
        printf("No books available to delete!\n");
        return;
    }
	
	//create a variable called is and store the id user want to delete 
    int id;
    printf("Enter the ID of the book to delete: ");
    scanf("%d", &id);

    int found = 0;
	
    for (int i = 0; i < *count; i++) {
		//condition checks both id are same or not
        if (books[i].id == id) {
            found = 1;

            // Shift all books left
            for (int j = i; j < *count - 1; j++) {
                books[j] = books[j + 1];
            }
			
			//update count and update file
            (*count)--;
            saveBooks(books, *count);
            printf(" Book with ID %d deleted successfully!\n", id);
            break;
        }
    }

    if (!found) {
        printf("Book with ID %d not found!\n", id);
    }
	
}
int menu(void);

void sortBooksByTitle(Book *books, int count) {
	Book temp;
	
	for(int i = 0; i < count - 1; i++){
		for(int j = 0;j < count - i -1; j++){
			if(strcasecmp(books[j].title, books[j + 1].title) > 0) {
				temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
			}
		}
		
	}
	printf("books sorted (A - Z)\n");
	
}

void sortBooksByYear(Book *books, int count) {
	Book temp;
	
	for(int i = 0;i < count -1; i++){
		for(int j = 0;j < count - i - 1;j++){
			if (books[j].year > books[j + 1].year) {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
		}
	}
	printf("books sorted by year\n");
	
}

void showBookCount(Book *books, int count) {
    if (count == 0) {
        printf("No books found!\n");
        return;
    }

    int availableCount = 0;

    for (int i = 0; i < count; i++) {
        if (books[i].available == 1){
            availableCount++;
        }
    }

    printf("Available Books: %d\n", availableCount);
	
}

void toggleAvailability(Book *books, int count) {
	int id;
	printf("enter the id of the book\n");
	scanf("%d", &id);
	
	for(int i = 0;i < count; i++){
		if(books[i].id == id){
			
			if(books[i].available == 1){
				books[i].available = 0;
				
				printf("book checked-out successfully\n");
			}
			
		}
	}
	//save changes
	saveBooks(books, count);
	
}

int main() {
	
	 struct stat st;
    
    // Check if file exists
    if (stat("library.txt", &st) == -1) {
        // File does not exist, create it
        FILE *fp = fopen("library.txt", "w");
        if (fp == NULL) {
            printf("Error creating file!\n");
            return 1;
        }
        fclose(fp);
        printf("(Info) File created automatically: library.txt\n");
    } else {
        printf("(Info) Existing file found: library.txt\n");
    }
	
    Book books[MAX_BOOKS];
    int count = loadBooks(books, MAX_BOOKS);

    int choice;
    do {
        choice = menu();
        switch (choice) {
            case 1: 
			addBook(books, &count); 
			
			break;
            case 2: 
			viewBooks(books, count); 
			
			break;
            case 3: 
			searchBook(books, count); 
			
			break;
            case 4: 
			deleteBook(books, &count); 
			
			break;
            case 5: 
			saveBooks(books, count); 
			printf("Saved!\n"); 
			
			break;
			case 6:
			sortBooksByTitle(books, count);
			saveBooks(books, count);
			break;
			
			case 7:
			sortBooksByYear(books, count);
			saveBooks(books, count);
			break;
			
			case 8:
			showBookCount(books, count);
			break;
			
			case 9:
			toggleAvailability(books, count);
			break;

            case 0: saveBooks(books, count); printf("Exiting...\n"); 
			break;
			
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}

int menu(void) {
    printf("\n===== Library Catalog Menu =====\n");
    printf("1. Add Book\n");
    printf("2. View All Books\n");
    printf("3. Search Book by Title\n");
    printf("4. Delete Book\n");
    printf("5. Save Catalog to File\n");
	printf("6. Sort Books by Title\n");
	printf("7. Sort Books by Year\n");
	printf("8. Available books\n");
	printf("9. Check-out Book\n");
    printf("0. Exit\n");
    printf("Enter choice: ");
    
    int choice;
    scanf("%d", &choice);
    getchar(); // to handle newline
    return choice;
}
