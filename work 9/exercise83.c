#include <stdio.h>

//83. Second Largest Among Three

//Write a C program that accepts three integers from the user and finds the second largest number among them.

int main() {
     int n1, n2, n3;
   int largest, second = -999999;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    largest = n1;
    if (n2 > largest) {
        largest = n2;
    }
    if (n3 > largest) {
        largest = n3;
    }
    if (n1 < largest && n1 > second){  
        second = n1;
    }
    if (n2 < largest && n2 > second){
        second = n2;
    }
    if (n3 < largest && n3 > second) {
        second = n3;
    }
    printf("Second largest is: %d\n", second);
    

    return 0;
}
