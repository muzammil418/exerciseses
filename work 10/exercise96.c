#include <stdio.h>

//96. Check for Adjacent 5's in Array
//Write a C program to check whether a given array of integers contains 5 next to a 5 somewhere.


int hasAdjacentFives(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {  
        if (arr[i] == 5 && arr[i + 1] == 5) {
            return 1; 
        }
    }
    return 0;   
}

int main() {
    int arr1[3] = {1, 2, 4};
    int arr2[5] = {1, 5, 5, 1, 3};
    int arr3[8] = {1, 2, 4, 8, 7, 5, 5, 0};

    printf("[1,2,4] => %d\n", hasAdjacentFives(arr1, 3));
    printf("[1,5,5,1,3] => %d\n", hasAdjacentFives(arr2, 5));
    printf("[1,2,4,8,7,5,5,0] => %d\n", hasAdjacentFives(arr3, 8));

    return 0;
}
