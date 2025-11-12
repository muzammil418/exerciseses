#include <stdio.h>
#include <stdlib.h>

int main() {
    int signal_array[10]; // Array to store the signal data
    int signal_size; // Number of elements in the array

    // Get the size of the signal array from the user
    printf("Enter the number of signal readings: ");
    scanf("%d", & signal_size);
    int duplicateFound = 0;

    // Get the signal readings from the user
    printf("Enter the signal readings:\n");
    for (int i = 0; i < signal_size; i++) {
        scanf("%d", & signal_array[i]);
    }

    for (int i = 0; i < signal_size; i++) {
        for (int j = i + 1; j < signal_size; j++) {
            if (signal_array[i] == signal_array[j]) {
                duplicateFound++;
                if (duplicateFound == 2) {
                    printf("Signal compromised!\n");
                    exit(0);
                }
            }
        }
    }

    // Example output (replace with your logic)
    printf("Signal clear.\n");
    free(signal_array);
    return 0;
}