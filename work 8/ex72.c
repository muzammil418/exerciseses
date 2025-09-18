#include <stdio.h>

int main() {
    int regionCount = 2; // Number of regions
    int highElevationCount = 0;
    int sum; 

    // 3D array: [region][row][col]
    int regions[2][3][3] = {
        {   // Region 1
            {10, 15, 20},
            {12, 18, 22},
            {14, 20, 25}
        },
        {   // Region 2
            {5, 8, 11},
            {7, 10, 13},
            {9, 12, 15}
        }
    };

    
    for (int r = 0; r < regionCount; r++) {
        sum = 0; 

        printf("Region %d:\n", r + 1);
        for (int i = 0; i < 3; i++) {         
            for (int j = 0; j < 3; j++) {     
                printf("%d ", regions[r][i][j]);

                sum += regions[r][i][j];
                if (regions[r][i][j] > 1000) {
                    highElevationCount++;
                }
            }
            printf("\n");
        }
        printf("Average of Region %d = %d\n\n", r + 1, sum / 9);
    }


    printf("Number of locations with high elevations: %d\n", highElevationCount);

    return 0;
}
