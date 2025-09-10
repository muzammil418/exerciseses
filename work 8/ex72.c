#include <stdio.h>

int main() {
    int regionCount[] = {2}; // Example data: 2 regions scanned

    // Example elevation grid (Region 1, 3x3)
    int elevationGrid[3][3] = {
        {10, 15, 20},
        {12, 18, 22},
        {14, 20, 25}
    };

    // Example elevation grid (Region 2, 3x3)
    int elevationGrid2[3][3] = {
        {5, 8, 11},
        {7, 10, 13},
        {9, 12, 15}
    };

    int highElevationCount = 0; 
    int sum1 = 0;               
    int sum2 = 0;               

    // ---------------- Region 1 ----------------
    printf("Region 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", elevationGrid[i][j]);

            sum1 += elevationGrid[i][j];

            if (elevationGrid[i][j] > 1000) {
                highElevationCount++;
            }
        }
        printf("\n");
    }
    printf("Average of Region 1 = %d\n\n", sum1 / 9);

    // ---------------- Region 2 ----------------
    printf("Region 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", elevationGrid2[i][j]);

            sum2 += elevationGrid2[i][j];

            if (elevationGrid2[i][j] > 1000) {
                highElevationCount++;
            }
        }
        printf("\n");
    }
    printf("Average of Region 2 = %d\n\n", sum2 / 9);

    // ---------------- Final Result ----------------
    printf("Number of locations with high elevations: %d\n", highElevationCount);

    return 0;
}
