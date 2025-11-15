#include <stdio.h>

int main() {
    int artifact_pulses[10]; // Array to store the energy pulse readings
    int pulse_count; // Number of elements in the array

    // Get the size of the artifact pulse array from the user
    printf("Enter the number of artifact pulses: ");
    scanf("%d", & pulse_count);

    if (pulse_count < 0 || pulse_count >= 10) {
        printf("error pulse count must be between 0  and 9\n");
        return 1;
    }

    // Get the artifact pulse readings from the user
    printf("Enter the artifact pulse readings:\n");
    for (int i = 0; i < pulse_count; i++) {
        scanf("%d", & artifact_pulses[i]);
    }

    // Your code to count the unique pulses goes here!
    int unique_count = 0;

    for (int i = 0; i < pulse_count; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (artifact_pulses[i] == artifact_pulses[j]) {
                break; // duplicate foun
            }
        }
        if (i == j) {
            unique_count++; // no duplicate found before
        }
    }

    // Example output (replace with your logic)
    printf("Number of unique pulses: %d\n", unique_count);

    return 0;
}