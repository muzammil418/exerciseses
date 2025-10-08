#include <stdio.h>
#include <stdlib.h>

//109. Rewrite the program in exercise 70 to use structures. In addition to the score, the program should also store username and date along with the high score. You can assume that the date can be stored as a string.


struct HighScore {
    char username[50];
    char date[50];
    int score;
};

int main() {
    struct HighScore table[10] = {0};
    char command;
    int index;

    // Initial table
    for (int i = 0; i < 10; i++) {
        printf("%d. 0\n", i);
    }

    while (1) {
        printf("Enter command (w = write, u = update, q = quit): ");
        scanf(" %c", &command);

        if (command == 'w') {
            printf("Enter index: ");
            scanf("%d", &index);

            printf("Enter username: ");
            scanf("%s", table[index].username);

            printf("Enter date (use format like 10-08-25): ");
            scanf("%s", table[index].date);

            printf("Enter score: ");
            scanf("%d", &table[index].score);

            printf("\nHigh score table:\n");
            for (int i = 0; i < 10; i++) {
                if (table[i].score > 0)
                    printf("%d. %d (%s, %s)\n", i, table[i].score, table[i].username, table[i].date);
                else
                    printf("%d. 0\n", i);
            }
        }

        else if (command == 'u') {
            printf("Enter index to update: ");
            scanf("%d", &index);

            printf("Enter new username: ");
            scanf("%s", table[index].username);

            printf("Enter new date (use format like 10-08-25): ");
            scanf("%s", table[index].date);

            printf("Enter new score: ");
            scanf("%d", &table[index].score);

            printf("\nUpdated high score table:\n");
            for (int i = 0; i < 10; i++) {
                if (table[i].score > 0)
                    printf("%d. %d (%s, %s)\n", i, table[i].score, table[i].username, table[i].date);
                else
                    printf("%d. 0\n", i);
            }
        }

        else if (command == 'q') {
            printf("Exiting program...\n");
            exit(0);
        }
    }

    return 0;
}
