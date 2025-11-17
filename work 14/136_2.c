#include <stdio.h>

int main() {
    int crystal_frequencies[10]; // Array to store the crystal resonance frequencies
    int frequency_count; // Number of elements in the array
    int target_sum; // The target sum for harmonic pairs

    // Get the size of the crystal frequency array from the user
    printf("Enter the number of crystal frequencies: ");
    scanf("%d", & frequency_count);

    // Get the crystal frequency readings from the user
    printf("Enter the crystal frequencies:\n");
    for (int i = 0; i < frequency_count; i++) {
        scanf("%d", & crystal_frequencies[i]);
    }

    // Get the target sum from the user
    printf("Enter the target sum: ");
    scanf("%d", & target_sum);

    // Your code to count the harmonic pairs goes here!
    int harmonic_pair_count = 0;
    for (int i = 0; i < frequency_count; i++) {
        for (int j = i + 1; j < frequency_count; j++) {
            if (crystal_frequencies[i] + crystal_frequencies[j] == target_sum) {
				printf("[%d, %d]\n", i, j);
                return 0;
            }
        }
    }
	
	printf("can not find any match target\n");

    return 0;
}