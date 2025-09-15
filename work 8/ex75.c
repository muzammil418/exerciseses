#include <stdio.h>
#define MAX_STEPS 100   // enough for this problem

int main() {
    int num_of_stairs;           
    int num_of_traps;            
    int traps[MAX_STEPS];        
    int count = 0;
    int stairs[MAX_STEPS];
    
    printf("Enter the number of stairs: ");
    scanf("%d", &num_of_stairs);

    for (int i = 0; i < num_of_stairs; i++) {
        stairs[i] = i + 1;
    }
    

    printf("Enter number of traps: ");
    scanf("%d", &num_of_traps);

    printf("Enter the trap step numbers:\n");
    for (int i = 0; i < num_of_traps; i++) {
        scanf("%d", &traps[i]);
    }
    
    for (int i = 0; i < num_of_stairs; i++) {
        int trapFound = 0;
        
        for (int j = 0; j < num_of_traps; j++) {
            if (stairs[i] == traps[j]) {
                trapFound = 1;
                break;
            }
        }

        if (trapFound) {
            break;
        } else {
            count++;
        }
    }
    
    printf("Safe steps before trap: %d\n", count);

    return 0;
}
