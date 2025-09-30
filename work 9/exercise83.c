#include <stdio.h>

//83. Second Largest Among Three

//Write a C program that accepts three integers from the user and finds the second largest number among them.

int main() {
    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if ((n1 > n2 && n1 < n3) || (n1 > n3 && n1 < n2)) {
        printf("Second largest is: %d\n", n1);
    }
    else if ((n2 > n1 && n2 < n3) || (n2 > n3 && n2 < n1)) {
        printf("Second largest is: %d\n", n2);
    }
    else {
        printf("Second largest is: %d\n", n3);
    }

    return 0;
}
