#include <stdio.h>

//81. Least Frequent Integer

//Write a C program that takes n number of positive integers. Find the integer that appears the least number of times among the said integers. If there are multiple such integers, select the smallest one.


int main() {
    int n;
    printf("enter how manay number:");
    scanf("%d", & n);

    int arr[n];
    printf("enter %d positive number:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }

    int loop_count = n + 1;
    int result = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count < loop_count) {
            loop_count = count;
            result = arr[i];
        } else if (count == loop_count && arr[i] < result) {
            result = arr[i];
        }

    }
	
	printf("The number that appears the least is: %d\n", result);
	
    return 0;
}