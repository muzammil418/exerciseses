#include <stdio.h>

int main() {
    int flora_signatures[10]; // Array to store the light signature readings
    int signature_count; // Number of elements in the array

    // Get the size of the flora signature array from the user
    printf("Enter the number of flora signatures: ");
    scanf("%d", & signature_count);

    // Get the flora signature readings from the user
    printf("Enter the flora signature readings:\n");
    for (int i = 0; i < signature_count; i++) {
        scanf("%d", & flora_signatures[i]);
    }

    // Your code to find the most frequent signature goes here!
    int most_frequent = 0;
    int max_count = 0;

    for (int i = 0; i < signature_count; i++) {
        int count = 0;
        for (int j = 0; j < signature_count; j++) {
            if (flora_signatures[i] == flora_signatures[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            most_frequent = flora_signatures[i];
        }
    }

    // Example output (replace with your logic)
    printf("Most frequent signature: %d\n", most_frequent);

    return 0;
}