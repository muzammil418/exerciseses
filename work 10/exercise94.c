#include <stdio.h>

//94. Merge Two Arrays of Length 3
//Write a C program to create a new array from two given arrays of integers, each of length 3.

void printArray(int arr[], int size){
    
     for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    
}

void mergeArray(int Arr1[], int Arr2[], int NewArr[], int size){
    for (int i = 0; i < size; i++) {
        NewArr[i] = Arr1[i];
        NewArr[i + size] = Arr2[i];
    }
  
    
}

int main() {
    int arr1[3] = {10, 20, 30};
    int arr2[3] = {40, 50, 60};
    int newArr[6];

     mergeArray(arr1, arr2, newArr, 3);

    printf("Elements in first array: ");
    printArray(arr1, 3);

    printf("\nElements in second array: ");
    printArray(arr2, 3);

    printf("\nNew array: ");
    printArray(newArr, 6);
    printf("\n");
    
    return 0;
}
