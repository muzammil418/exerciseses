#include <stdio.h>

#include <stdlib.h>

struct highscore {
    char name[50];
    char date[50];
    int value;
};

int main() {
    //create an struct array
    struct highscore h[10];
    char command = 0;
    int index = 0;

    // assingnig 0 to all array location 
    for (int i = 0; i < 10; i++) {
		h[i].value = 0;
        h[i].name[0] = '\0';
        h[i].date[0] = '\0';
    }

    //printing zeror
    for (int i = 0; i < 10; i++) {
        printf("%d. 0\n", i);
    }

    while (1) {
        printf("enter the command:");
        scanf(" %c", & command);

        //condition
        if (command == 'w') {
            printf("Enter an index:");
            scanf("%d", & index);

            //take inputs
            printf("enter name: ");
            scanf("%s", h[index].name);

            printf("enter date (00-00-00): ");
            scanf("%s", h[index].date);

            printf("Enter a value:");
            scanf("%d", & h[index].value);

            //print values or used if else statement to check the conditions
            printf("\nHigh score table:\n");
            for (int i = 0; i < 10; i++) {
                if (h[i].value != 0) {
                    printf("%d. %d name: %s, date: %s\n", i, h[i].value, h[i].name, h[i].date);
                } else {
                    printf("%d. 0\n", i);
                }
            }
        }
        if (command == 'u') {
            printf("Enter an index:");
            scanf("%d", & index);

            //take inputs
            printf("enter name: ");
            scanf("%s", h[index].name);

            printf("enter date (00-00-00): ");
            scanf("%s", h[index].date);

            printf("Enter a value:");
            scanf("%d", & h[index].value);

            //print values or used if else statement to check the conditions
            printf("\nHigh score table:\n");
            for (int i = 0; i < 10; i++) {
                if (h[i].value != 0) {
                    printf("%d. %d name: %s, date: %s\n", i, h[i].value, h[i].name, h[i].date);
                } else {
                    printf("%d. 0\n", i);
                }
            }
        }
        if (command == 'q') {
            exit(0);
        }
    }

    return 0;
}