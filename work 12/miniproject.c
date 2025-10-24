#include <stdio.h>
#include <stdlib.h>  // for exit()
#include <string.h>  // for strcmp()

// function to add data in files
void addStudent() {
    //open a file
    FILE *fp = fopen("scores.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    //crate variable to store names and score
    char name[100];
    int score;
    
    //take input
    printf("enter student name: ");
    scanf("%s", name);

    printf("enter score: ");
    scanf("%d", &score);
    
    //add data in files
    fprintf(fp, "%s %d\n", name, score);

    //close file
    fclose(fp);
    printf("student added successfully!\n");
}

// function to add data in files
void printdata() {
    //open a file
    FILE *fp = fopen("scores.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    char line[1000];
   
    while(fgets(line, sizeof(line), fp)){
		printf("%s", line);
	}
    fclose(fp);
}

//function to add data in files
void searchStudent() {
     //open a file
    FILE *fp = fopen("scores.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    //crate variable to store names and score
    char name[100], ninput[100];
    int score, sinput;
    
    
    //take input
    printf("enter student name: ");
    scanf("%s", name);
 
    printf("enter score: ");
    scanf("%d", &score);
    
    //using fscanf to print strings or integers
    while(fscanf(fp, "%s  %d", ninput, &sinput) != EOF){
		 if((strcmp(name,ninput) == 0) && (score == sinput)){
            printf("%s %d\n", name, score);
         }
        else{
            printf("match di not found\n");
         }
	} 
    
}

int main(){
    int choice;
	char name1[100];
	int score1;
	
    while (1) {
        printf("\n===== Student Score Keeper =====\n");
        printf("1. Add new student\n");
        printf("2. View all students\n");
        printf("3. Search by name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice) {
            case 1:
				addStudent();
				
                break;
            case 2:
                printdata();
                
                break;
            case 3:
                searchStudent();
                
                break;
            case 4:
                printf("Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}