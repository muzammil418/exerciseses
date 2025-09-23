#include <stdio.h>

int main() {
    int counts[5] = {
        0,
        0,
        0,
        0,
        0
    };
    int time_code;

    printf("Enter 10 time codes (1-5) for the books:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", & time_code);

        if (time_code >= 1 && time_code <= 5) {
            counts[time_code - 1]++;
        } else {
            printf("Invalid input ignored: %d\n", time_code);
        }
    }

    for (int i = 0; i < 5; i++) {
            printf("Century %d: %d book\n", i + 1, counts[i],counts[i] == 1 ? "book" : "books");
    }

    return 0;
}