#include <stdio.h>

int main() {
    int n;
    printf("enter how manay number:");
    scanf("%d", & n);

    int arr[n];
    printf("enter %d positive numberL:\n", n);
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