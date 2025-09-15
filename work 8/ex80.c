#include <stdio.h>

#define NUM_FOODS 5

int main() {
    char foods[NUM_FOODS][30] = {"Pasta","Burger","Salad","Pizza","Fruit Juice"};
    int stock[NUM_FOODS] = {10,15,8,12,20};
    int item, qty;
    int choice;

    do {
        printf("1. Display all food items and stock\n");
        printf("2. Order food  \n");
        printf("3. Restock food  \n");
        printf("4. Exit\n");

        scanf("%d", & choice);

        if (choice == 1) {
			
            for (int i = 0; i < 5; i++) {
                printf("%s: %d in stock\n", foods[i], stock[i]);
            }
        } 
		else if (choice == 2) {
			
            printf("choose the food item (1-5): ");
            scanf("%d", & item);

            printf("enter the quantity of item: ");
            scanf("%d", & qty);

            if (item < 1 || item > 5) {
                printf("the food item is invalaid\n");
            } 
			
			else if (qty <= 0) {
                printf("quantity is invalaid\n");
            } 
			
			else if (stock[item - 1] < qty) {
                printf("Not enough stock for %s!\n", foods[item - 1]);
            } 
			
			else {
                stock[item - 1] -= qty;
            }
			
        }
		
		else if (choice == 3) {

            item = 0;
            qty = 0;

            printf("choose the food item between (1-5): ");
            scanf("%d", & item);

            printf("enter the ammount you want to add in stock: ");
            scanf("%d", & qty);

            if (item < 1 || item > 5) {
                printf("the food item is invalid\n");
            } 
			
			else if (qty <= 0) {
                printf("quantity is invalid\n");
            }
			
			else {
                stock[item - 1] += qty;
            }

        } 
		
		else if (choice == 4) {
            printf("Exiting program...\n");
            break;
        } 
		
		else {
            printf("Invalid choice! Please try again.\n");
        }

    } while (1);

    return 0;
}