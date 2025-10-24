## 📘 Mini Library Catalog — Project Brief

### 🎯 **Objective**

Build a command-line Library Catalog program in C that lets users manage a small collection of books.
You will apply **structures**, **arrays**, **pointers**, **functions**, and **file input/output** to create a simple but complete data management system.

---

### 🧱 **Program Overview**

Your program should:

* Store a list of books (up to 100).
* Allow the user to:

  1. Add new books
  2. View all books
  3. Search for a book by title
  4. Delete a book
  5. Save and load the catalog from a file
  6. Exit safely (saving automatically)

All data should be saved in a text file called **`library.txt`** so that the catalog persists between program runs.

---

### 📄 **Book Structure**

Each book record will have:

```c
typedef struct {
    int id;            // Unique ID number
    char title[100];   // Book title
    char author[100];  // Author’s name
    int year;          // Year of publication
    int available;     // 1 = available, 0 = not available
} Book;
```

---

### ⚙️ **Functions to Implement**

| Function Name                              | Description                                                                     |
| ------------------------------------------ | ------------------------------------------------------------------------------- |
| `int loadBooks(Book *books, int max)`      | Reads book records from file and fills the array. Returns how many were loaded. |
| `void saveBooks(Book *books, int count)`   | Writes all books to the file. Called on save and exit.                          |
| `void addBook(Book *books, int *count)`    | Adds a new book by asking for details from the user.                            |
| `void viewBooks(Book *books, int count)`   | Prints all books neatly on screen.                                              |
| `void searchBook(Book *books, int count)`  | Finds books whose title matches a search term.                                  |
| `void deleteBook(Book *books, int *count)` | Deletes a book by ID and shifts array elements.                                 |
| `int menu(void)`                           | Displays options and returns the user’s choice.                                 |

---

### 💾 **File Format (suggested)**

You can choose your own format — but it should be **consistent** and **readable**.

Example (text-based):

```
1|The Hobbit|J.R.R. Tolkien|1937|1
2|Dune|Frank Herbert|1965|0
3|1984|George Orwell|1949|1
```

Each line = one book record.
Fields separated by `|` or commas (your choice).

When reading from file:

* Split the line into fields.
* Convert numbers using `atoi()`.
* Store values into the corresponding struct.

---

### 🧩 **Implementation Hints **

* Use `fopen()`, `fclose()`, `fprintf()`, `fscanf()`, or `fgets()`/`sscanf()` for file handling.
* Use loops to go through the array.
* When deleting a book, shift later books left in the array.
* Use `strcmp()` for comparing strings (titles).
* Use pointers properly when updating the book count.

---

### 🧠 **Stretch Challenges (Optional)**

Once everything works, you can extend the project by adding:

* An option to **sort books** (by title or year).
* A **check-out / return system** (toggle the `available` flag).
* A **counter** showing how many books are available vs. total.
* **Save confirmation** (ask user before overwriting file).

---

### ✅ **Expected Output Example**

```
===== Library Catalog Menu =====
1. Add Book
2. View All Books
3. Search Book by Title
4. Delete Book
5. Save Catalog to File
0. Exit
Enter choice: 1
Enter title: The Hobbit
Enter author: J.R.R. Tolkien
Enter year: 1937
Book added successfully!
```

and so on…
