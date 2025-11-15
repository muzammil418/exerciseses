#include <stdio.h>

int main() {
    int ecosystem_energy[10]; // Array to store the energy balance of each species
    int species_count; // Number of elements in the array

    // Get the size of the ecosystem energy array from the user
    printf("Enter the number of species: ");
    scanf("%d", & species_count);

    // Get the ecosystem energy readings from the user
    printf("Enter the energy balance for each species:\n");
    for (int i = 0; i < species_count; i++) {
        scanf("%d", & ecosystem_energy[i]);
    }

    // Your code to determine if the ecosystem is stable goes here!
    int is_stable = 1; // Assume stable initially

    for (int i = 0; i < species_count; i++) {
        int preview = (i - 1 + species_count) % species_count;

        if (ecosystem_energy[preview] < ecosystem_energy[i]) {
            is_stable = 0;
        }

    }

    // Example output (replace with your logic)
    if (is_stable) {
        printf("Stable\n");
    } else {
        printf("Unstable\n");
    }

    return 0;
}