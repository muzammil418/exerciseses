Worksheet 12.1 -- Generated with ChatGPT
Date: 22nd of October, 2025
Points: 2

Note:
The worksheet might have errors or inconsistancies. In such a case, describe the inconsistancy accurately and ask for clarification.

Write meaningful variable names and add comments to ensure the reader can understand your code at a later date.

Do not write code that you don't understand or would not be able to explain yourself.
---

# 🧠 **C File I/O Worksheet – Learn by Doing!**

## 🎯 Goal:

By the end of this worksheet, you’ll understand how to:

* Open and close files in C
* Read and write data to files
* Understand how file pointers (`FILE *`) work

---

## 🌱 1. What Is File I/O?

When you write a program, it usually interacts with the user through the screen (input/output).
But sometimes you want your program to **save data** or **read data** from a file — just like saving a game or reading a text document.

In C, you use **File I/O (Input/Output)** to make this happen.

---

## 🧩 Key Concepts

| Concept                     | Meaning                                                                           |
| --------------------------- | --------------------------------------------------------------------------------- |
| **File Pointer (`FILE *`)** | A variable that helps your program keep track of the file it’s working with       |
| **Opening a File**          | Telling C which file you want to work with and how (`read`, `write`, or `append`) |
| **Closing a File**          | Telling C you’re done using the file                                              |
| **Modes**                   | `"r"` (read), `"w"` (write), `"a"` (append)                                       |

---

## 🧪 Example 1 — Opening and Closing a File

This first example just **creates** or **opens** a file and then **closes** it.

```c
#include <stdio.h>

int main() {
    FILE *fp; // Create a file pointer variable

    // Try to open a file named "example.txt" in write mode ("w")
    fp = fopen("example.txt", "w");

    if (fp == NULL) { // Always check if file opened successfully
        printf("Error: Could not open file!\n");
        return 1; // Exit program if file didn't open
    }

    printf("File opened successfully!\n");

    fclose(fp); // Close the file
    printf("File closed.\n");

    return 0;
}
```

🧠 **Learning Outcome:**
You now know how to:

* Create a `FILE *` pointer
* Open a file in **write mode**
* Check if it opened successfully
* Close it properly

✅ **Expected Output:**

```
File opened successfully!
File closed.
```

---

## 🧪 Example 2 — Writing Text to a File

Now let’s **write** something into the file.

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("example.txt", "w"); // Open file in write mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, world!\n");
    fprintf(fp, "This is my first line in a file.\n");

    fclose(fp);

    printf("Data written successfully!\n");
    return 0;
}
```

✅ **Expected Outcome (in your file `example.txt`):**

```
Hello, world!
This is my first line in a file.
```

💡 *Note:* `"w"` mode erases old content before writing new data.
If you run it again, it **replaces** the file contents!

🧠 **Learning Outcome:**
You’ve learned how to:

* Write text to a file using `fprintf()`
* Understand that `"w"` replaces the file’s previous content

---

## 🧪 Example 3 — Reading from a File

Now we’ll **read** what we wrote.

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("example.txt", "r"); // Open file in read mode
    char line[100]; // Buffer to store a line from the file

    if (fp == NULL) {
        printf("Error: Could not open file for reading!\n");
        return 1;
    }

    // Read one line at a time until the end of file (EOF)
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line); // Print what was read
    }

    fclose(fp);
    return 0;
}
```

✅ **Expected Outcome (on screen):**

```
Hello, world!
This is my first line in a file.
```

🧠 **Learning Outcome:**

* Use `"r"` mode to read from a file
* Use `fgets()` to read line by line

---

## 🧪 Example 4 — Appending to a File

What if you don’t want to erase what’s already in the file?
Use `"a"` (append mode) to **add new text** at the end.

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("example.txt", "a"); // Open file in append mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Adding another line at the end!\n");

    fclose(fp);

    printf("Line added successfully!\n");
    return 0;
}
```

✅ **Expected Outcome (in your file):**

```
Hello, world!
This is my first line in a file.
Adding another line at the end!
```

🧠 **Learning Outcome:**

* `"a"` keeps old data and adds new content at the end
* File writing is cumulative if you use append mode

---

## 🧪 Example 5 — Writing and Reading Numbers

You can also store numbers or data for your program to reuse.

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    for (int i = 1; i <= 5; i++) {
        fprintf(fp, "%d\n", i * 10); // Write numbers 10, 20, 30, 40, 50
    }

    fclose(fp);
    printf("Numbers written!\n");

    // Now read them back
    fp = fopen("numbers.txt", "r");
    int num;

    printf("Reading numbers from file:\n");
    while (fscanf(fp, "%d", &num) != EOF) {
        printf("%d ", num);
    }

    fclose(fp);
    return 0;
}
```

✅ **Expected Outcome (on screen):**

```
Numbers written!
Reading numbers from file:
10 20 30 40 50
```

🧠 **Learning Outcome:**

* You can use `fprintf()` and `fscanf()` for formatted data (like numbers)
* Files can store and load structured data

---

## 🏁 Final Summary

| Function                    | Purpose                          |
| --------------------------- | -------------------------------- |
| `fopen("filename", "mode")` | Opens a file (`r`, `w`, or `a`)  |
| `fclose(fp)`                | Closes an open file              |
| `fprintf(fp, ...)`          | Writes text or numbers to a file |
| `fscanf(fp, ...)`           | Reads formatted data from a file |
| `fgets(buffer, size, fp)`   | Reads a line of text             |

---

## 🧠 Challenge (for practice)

1. Modify Example 5 to store **names** of 3 people instead of numbers.
2. Read them back and print each on a new line.
3. Try to use `"a"` mode to add another name without deleting the old ones.
