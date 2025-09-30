#include <stdio.h>

//86. Longest Ascending Contiguous Subsequence

//Write a C program that accepts a sequence of positive integers from the user and finds the longest continuous subsequence.

int main()
{
    int n; 
    printf("Length of the sequence: ");
    scanf("%d", &n); 
    
    int arr[n]; 
    printf("Sequence: "); 
    for(int i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    }

    int count = 1;       
    int temp[100];        
    temp[0] = arr[0];    

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            temp[count] = arr[i + 1];
            count++;
        }
    }

    printf("Length of longest ascending contiguous subsequence: %d [", count);
    for(int i = 0; i < count; i++) {
        printf("%d", temp[i]);
        if(i < count - 1) printf(" ");
    }
    printf("]\n");

    return 0;
}
