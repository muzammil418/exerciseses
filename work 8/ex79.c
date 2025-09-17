#include <stdio.h>

int main() {
    int growth[3][4] = {
        { 1,2,3,4}, // Plant A
        {2,3,1,5}, // Plant B
        { 4,0,2,3} // Plant C
    };
    char plants[3] = {'A','B','C'};

    for (int i = 0; i < 3; i++) {
        int total = 0;
        for (int j = 0; j < 4; j++) {
            total += growth[i][j];
        }
        printf("Plant %c total growth: %d cm\n", plants[i], total);
    }

    return 0;
}