Worksheet 12.2 -- Generated with ChatGPT
Date: 22nd of October, 2025
Points: 8

Note: The worksheet might have errors or inconsistancies. In such a case, describe the inconsistancy accurately and ask for clarification.

Write meaningful variable names and add comments to ensure the reader can understand your code at a later date.

Do not write code that you don't understand or would not be able to explain yourself.
---

# 🧮 **Mini Project: “Student Score Keeper”**

## 🎯 **Project Goal**

Build a small C program that lets the user:

1. Add new student names and scores
2. View all saved students
3. Search for a student’s score by name
4. Save everything permanently using files

This project combines **file reading**, **writing**, and **searching**, while reinforcing skills like loops, conditionals, and string handling.

---

## 📚 **Concepts You’ll Use**

* File handling (`fopen`, `fclose`, `fprintf`, `fscanf`, `fgets`)
* Strings (`char name[50]`)
* Loops & conditionals
* Menu-driven program
* Basic error handling

---

## ⚙️ **Project Description**

You’re going to make a simple *score manager*.
It should store student data in a file (e.g. `scores.txt`) like this:

```
Alice 88
Bob 75
Charlie 93
```

Each line is:
👉 **student_name** **score**

The program will show a menu:

```
1. Add new student
2. View all students
3. Search by name
4. Exit
Enter your choice:
```

When the user chooses:

* **1:** Ask for a name and score → save to file
* **2:** Display all students
* **3:** Ask for a name → search and display their score
* **4:** Exit program

---

## 🧩 **Project Structure**

You can start simple and improve as you go!

### 🔹 Step 1: Create the Menu System

Start with just the menu and choice input.

```c
#include <stdio.h>
#include <stdlib.h>  // for exit()
#include <string.h>  // for strcmp()

int main() {
    int choice;

    while (1) {
        printf("\n===== Student Score Keeper =====\n");
        printf("1. Add new student\n");
        printf("2. View all students\n");
        printf("3. Search by name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice) {
            case 1:
                // TODO: Add student
                break;
            case 2:
                // TODO: View students
                break;
            case 3:
                // TODO: Search student
                break;
            case 4:
                printf("Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
```

🧠 **Hint:** Always use a loop for a menu-based program so the user can do multiple things without restarting it.

---

### 🔹 Step 2: Add New Student (Write Mode or Append Mode)

Fill in the **Add student** section:

```c
void addStudent() {
}
```

🧠 **Hint:**

* `"a"` mode adds new data at the end
* `fprintf()` writes formatted data (like `printf()` but to a file)

Then call `addStudent()` inside `case 1`.

---

### 🔹 Step 3: View All Students (Read Mode)

```c
void viewStudents() {
}
```

🧠 **Hint:**
Use `fscanf()` with `!= EOF` to loop until the file ends.

Call `viewStudents()` inside `case 2`.

---

### 🔹 Step 4: Search for a Student

```c
void searchStudent() {
}
```

🧠 **Hint:**

* Use `strcmp()` from `<string.h>` to compare names
* Remember that strings can’t be compared with `==` in C!

Call `searchStudent()` inside `case 3`.

---

### 🧩 **Combine Everything**

At this point:

* Menu works
* You can add, view, and search students
* Everything is saved to `scores.txt`

You’ve built a real working program that uses **C file I/O end-to-end!** 🎉

---

## 🧠 **Extra Challenges (Optional)**

Try improving the program by:

1. Allowing multi-word names using `fgets()` instead of `scanf("%s")`
2. Sorting the students by score before printing
3. Preventing duplicate student entries
4. Calculating average, highest, and lowest score

👉 *Hint:* To do those, you’ll need to load data into arrays or structs before processing.

---

## 🧾 **Glossary**

| Term          | Meaning                                              |
| ------------- | ---------------------------------------------------- |
| **FILE ***    | Pointer that represents a file in C                  |
| **fopen()**   | Opens a file (`"r"`, `"w"`, `"a"`)                   |
| **fclose()**  | Closes an opened file                                |
| **fprintf()** | Writes formatted output to a file                    |
| **fscanf()**  | Reads formatted input from a file                    |
| **fgets()**   | Reads a line of text from a file                     |
| **EOF**       | “End of File” marker used to know when reading stops |
| **strcmp()**  | Compares two strings                                 |
| **exit()**    | Stops the program immediately                        |

---

## 📘 **Mini Documentation (Quick Reference)**

### `FILE *fopen(const char *filename, const char *mode);`

* Opens a file.
* Modes: `"r"` = read, `"w"` = write (overwrite), `"a"` = append
* Returns a pointer to the opened file or `NULL` if failed.

### `int fprintf(FILE *stream, const char *format, ...);`

* Prints formatted output to a file (like `printf`).
* Example: `fprintf(fp, "%s %d", name, score);`

### `int fscanf(FILE *stream, const char *format, ...);`

* Reads formatted data from a file.
* Example: `fscanf(fp, "%s %d", name, &score);`

### `char *fgets(char *str, int n, FILE *stream);`

* Reads one line from a file (including spaces).
* Stops after newline or when buffer is full.

### `int fclose(FILE *stream);`

* Closes the file. Always do this when done!

---

## 🧩 **Expected Outcome**

After a few runs, your file `scores.txt` might look like:

```
Alice 88
Bob 75
Charlie 93
```

And your program will let you:

* Add new entries
* View all scores
* Search for specific names
