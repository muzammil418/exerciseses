#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

struct Item {
    char name[20];
    int attackBonus;
    int cost;
};

struct Enemy {
    char name[20];
    int hp;
    int attack;
    int goldReward;
};

struct Location {
    char name[25];
    int dangerLevel;
    struct Enemy enemies[3];
};

struct Player {
    char name[30];
    float level;
    int hp;
    int attack;
    int gold;
    struct Item inventory[5];
    int itemCount;
};

//loade data from file to ram
void loadegame (struct Player *p){
	//open file and check if its emty or not
	FILE *fp = fopen("game.txt", "r");
	if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
	
	//extract data from file and loade in ram
	fscanf(fp, "%s %.1f %d %d %d %d", p->name, &p->level, &p->hp, &p->attack, &p->gold, &p->itemCount);

    // Read inventory (max 5 items)
    for(int i = 0; i < 5; i++){
		fscanf(fp, "%s %d %d", p->inventory[i].name, &p->inventory[i].attackBonus, &p->inventory[i].cost);
    }

    fclose(fp);
	printf("game loaded successfully for player '%s'\n", p->name);
}

//game save function
void savegame(struct Player *p){
	//open file on write mode
	FILE *fp = fopen("game.txt", "w");
	if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
	
	//add player info in file
	fprintf(fp, "%s %.1f %d %d %d %d\n", p->name, p->level, p->hp, p->attack,p->gold, p->itemCount);
    
	//add player inventory info in file
	for (int i = 0; i < p->itemCount; i++) {
        fprintf(fp, "%s %d %d\n", 
                p->inventory[i].name, p->inventory[i].attackBonus, p->inventory[i].cost);
    }

    fclose(fp);
    printf("Game saved successfully!\n");
}

//explore function
void explore(struct Player *p, struct Location locations[]){
    int choice = 0;
    int choicemob = 0;
    char wepon[20];

    while(1){
		printf("your level is: %d\n", p->level);
        printf("where you want to go!\n");
        printf("1.forest level requirement:1 - 9\n");
        printf("2.cave level requirement:10 - 23\n");
        printf("3.castle level requirement:24 - 30\n");
		printf("4.enter 4 to exit\n");
        scanf("%d", &choice);
        
        //forest part
        if(choice == 1){
            struct Location loc = locations[0];

            printf("your level is: %.1f\n", p->level);
            printf("there are 3 mobs in forest:\n");
            printf("1.wolf (level 1+)\n");
            printf("2.goblin (level 4+)\n");
            printf("3.wither (level 8+)\n");
            scanf("%d", &choicemob);

            // WOLF
            if(choicemob == 1){
                if(p->level >= 1){
                    printf("enter the weapon name: ");
                    scanf("%s", wepon);

                    int found = 0;
                    for(int i=0; i<p->itemCount; i++){
                        if(strcmp(wepon , p->inventory[i].name) == 0){
                            found = 1;

                            printf("defeating the mob...\n");
                            printf("mob defeated!\n");

                            p->gold += loc.enemies[0].goldReward;
                            p->level += 0.5;
                        }
                    }

                    if(found == 0){
                        printf("weapon not found!\n");
                    }
                }
                else{
                    printf("your level is low for wolf\n");
                }
            }

            // GOBLIN
            if(choicemob == 2){
                if(p->level >= 4){
                    printf("enter the weapon name: ");
                    scanf("%s", wepon);

                    int found = 0;
                    for(int i=0; i<p->itemCount; i++){
                        if(strcmp(wepon , p->inventory[i].name) == 0){
                            found = 1;

                            printf("defeating the mob...\n");
                            printf("mob defeated!\n");

                            p->gold += loc.enemies[1].goldReward;
                            p->level += 0.8;
                        }
                    }

                    if(found == 0){
                        printf("weapon not found!\n");
                    }
                }
                else{
                    printf("your level is low for goblin\n");
                }
            }

            // WITHER
            if(choicemob == 3){
                if(p->level >= 8){
                    printf("enter the weapon name: ");
                    scanf("%s", wepon);

                    int found = 0;
                    for(int i=0; i<p->itemCount; i++){
                        if(strcmp(wepon , p->inventory[i].name) == 0){
                            found = 1;

                            printf("defeating the mob...\n");
                            printf("mob defeated!\n");

                            p->gold += loc.enemies[2].goldReward;
                            p->level += 1;
                        }
                    }

                    if(found == 0){
                        printf("weapon not found!\n");
                    }
                }
                else{
                    printf("your level is low for wither\n");
                }
            }
        }
		
		        // -------------------------
        // CAVE PART (CHOICE == 2)
        // -------------------------
        if(choice == 2){
            struct Location loc = locations[1];

            printf("your level is: %d\n", p->level);
            printf("there are 3 mobs in cave:\n");
            printf("1.bat (level 11+)\n");
            printf("2.skeleton (level 14+)\n");
            printf("3.zombie (level 18+)\n");
            scanf("%d", &choicemob);

            // BAT
            if(choicemob == 1){
                if(p->level >= 11){
                    printf("enter the weapon name: ");
                    scanf("%s", wepon);

                    int found = 0;
                    for(int i=0; i<p->itemCount; i++){
                        if(strcmp(wepon , p->inventory[i].name) == 0){
                            found = 1;

                            printf("defeating the mob...\n");
                            printf("mob defeated!\n");

                            p->gold += loc.enemies[0].goldReward;
                            p->level += 0.3;
                        }
                    }

                    if(found == 0){
                        printf("weapon not found!\n");
                    }
                }
                else{
                    printf("your level is low for bat\n");
                }
            }

            // SKELETON
            if(choicemob == 2){
                if(p->level >= 14){
                    printf("enter the weapon name: ");
                    scanf("%s", wepon);

                    int found = 0;
                    for(int i=0; i<p->itemCount; i++){
                        if(strcmp(wepon , p->inventory[i].name) == 0){
                            found = 1;

                            printf("defeating the mob...\n");
                            printf("mob defeated!\n");

                            p->gold += loc.enemies[1].goldReward;
                            p->level += 1.3;
                        }
                    }

                    if(found == 0){
                        printf("weapon not found!\n");
                    }
                }
                else{
                    printf("your level is low for skeleton\n");
                }
            }

            // ZOMBIE
            if(choicemob == 3){
                if(p->level >= 18){
                    printf("enter the weapon name: ");
                    scanf("%s", wepon);

                    int found = 0;
                    for(int i=0; i<p->itemCount; i++){
                        if(strcmp(wepon , p->inventory[i].name) == 0){
                            found = 1;

                            printf("defeating the mob...\n");
                            printf("mob defeated!\n");

                            p->gold += loc.enemies[2].goldReward;
                            p->level += 1.5;
                        }
                    }

                    if(found == 0){
                        printf("weapon not found!\n");
                    }
                }
                else{
                    printf("your level is low for zombie\n");
                }
            }
        }
		
		// -------------------------
        // CASTLE PART (CHOICE == 3)
        // -------------------------
        if(choice == 3){
            struct Location loc = locations[2];

            printf("your level is: %d\n", p->level);
            printf("there are 3 mobs in castle:\n");
            printf("1.raiders (level 25+)\n");
            printf("2.knight (level 28+)\n");
            printf("3.dragon (level 31+)\n");
            scanf("%d", &choicemob);

            // RAIDERS
            if(choicemob == 1){
                if(p->level >= 25){
                    printf("enter the weapon name: ");
                    scanf("%s", wepon);

                    int found = 0;
                    for(int i=0; i<p->itemCount; i++){
                        if(strcmp(wepon , p->inventory[i].name) == 0){
                            found = 1;

                            printf("defeating the mob...\n");
                            printf("mob defeated!\n");

                            p->gold += loc.enemies[0].goldReward;
                            p->level += 2.0;
                        }
                    }

                    if(found == 0){
                        printf("weapon not found!\n");
                    }
                }
                else{
                    printf("your level is low for raiders\n");
                }
            }

            // KNIGHT
            if(choicemob == 2){
                if(p->level >= 28){
                    printf("enter the weapon name: ");
                    scanf("%s", wepon);

                    int found = 0;
                    for(int i=0; i<p->itemCount; i++){
                        if(strcmp(wepon , p->inventory[i].name) == 0){
                            found = 1;

                            printf("defeating the mob...\n");
                            printf("mob defeated!\n");

                            p->gold += loc.enemies[1].goldReward;
                            p->level += 2.5;
                        }
                    }

                    if(found == 0){
                        printf("weapon not found!\n");
                    }
                }
                else{
                    printf("your level is low for knight\n");
                }
            }

            // DRAGON
            if(choicemob == 3){
                if(p->level >= 31){
                    printf("enter the weapon name: ");
                    scanf("%s", wepon);

                    int found = 0;
                    for(int i=0; i<p->itemCount; i++){
                        if(strcmp(wepon , p->inventory[i].name) == 0){
                            found = 1;

                            printf("defeating the mob...\n");
                            printf("mob defeated!\n");

                            p->gold += loc.enemies[2].goldReward;
                            p->level += 3.0;
                        }
                    }

                    if(found == 0){
                        printf("weapon not found!\n");
                    }
                }
                else{
                    printf("your level is low for dragon\n");
                }
            }
        }
		if(choice == 4){
			return;
		}
		
    } // while ends
}

void visitShop(struct Player *p){
    struct Item shopItems[3] = {
        {"sword", 5, 50},
        {"axe", 8, 80},
        {"bow", 4, 40}
    };

    int shopChoice = 0;

    printf("\nWelcome to the shop!\n");
    printf("Your gold: %d\n", p->gold);

    printf("1. sword - 50 gold\n");
    printf("2. axe - 80 gold\n");
    printf("3. bow - 40 gold\n");
    printf("4. leave shop\n");
    scanf("%d", &shopChoice);

    // SWORD
    if(shopChoice == 1){
        if(p->gold >= shopItems[0].cost){
            if(p->itemCount < 5){
                p->inventory[p->itemCount] = shopItems[0];
                p->itemCount++;
                p->gold -= shopItems[0].cost;
                printf("you bought sword\n");
            }
            else{
                printf("inventory full\n");
            }
        }
        else{
            printf("not enough gold\n");
        }
    }

    // AXE
    if(shopChoice == 2){
        if(p->gold >= shopItems[1].cost){
            if(p->itemCount < 5){
                p->inventory[p->itemCount] = shopItems[1];
                p->itemCount++;
                p->gold -= shopItems[1].cost;
                printf("you bought axe\n");
            }
            else{
                printf("inventory full\n");
            }
        }
        else{
            printf("not enough gold\n");
        }
    }

    // BOW
    if(shopChoice == 3){
        if(p->gold >= shopItems[2].cost){
            if(p->itemCount < 5){
                p->inventory[p->itemCount] = shopItems[2];
                p->itemCount++;
                p->gold -= shopItems[2].cost;
                printf("you bought bow\n");
            }
            else{
                printf("inventory full\n");
            }
        }
        else{
            printf("not enough gold\n");
        }
    }

    if(shopChoice == 4){
        printf("leaving shop...\n");
    }
}


int main() {
	//check if file exist or not
	struct stat st;
	if (stat("game.txt", &st) == -1) {
        // File does not exist, create it
        FILE *fp = fopen("game.txt", "w");
        if (fp == NULL) {
            printf("Error creating file!\n");
            return 1;
        }
        fclose(fp);
        printf("(Info) File created automatically: game.txt\n");
    } else {
        printf("(Info) Existing file found: game.txt\n");
    }
	
	
    // Shop items
    struct Item shopItems[5] = {
        {"sword", 5, 50},
        {"axe", 8, 80},
        {"bow", 4, 40},
    };

    // Forest enemies
    struct Enemy forestEnemies[3] = {
        {"wolf", 30, 5, 10},
        {"goblin", 25, 4, 8},
        {"wither", 40, 7, 15}
    };

    // Cave enemies
    struct Enemy caveEnemies[3] = {
        {"bat", 20, 3, 5},
        {"skeleton", 35, 6, 12},
        {"zombie", 50, 8, 20}
    };

    // Castle enemies
    struct Enemy castleEnemies[3] = {
        {"raiders", 60, 10, 30},
        {"knight", 50, 12, 40},
        {"dragon", 80, 15, 50}
    };

    // Locations
    struct Location locations[4] = {
        {"Forest", 1, {forestEnemies[0], forestEnemies[1], forestEnemies[2]}},
        {"Cave", 2, {caveEnemies[0], caveEnemies[1], caveEnemies[2]}},
        {"Castle", 3, {castleEnemies[0], castleEnemies[1], castleEnemies[2]}},
        {"Village", 0, {{"",0,0,0}, {"",0,0,0}, {"",0,0,0}}} // Safe zone
    };
	
	//for player info we ask user for new game or loade game
   struct Player p;
   int startchoice;
    printf("1.new game\n");
	printf("2.loade game\n");
	scanf("%d", &startchoice);
	
	if(startchoice == 1){
		printf("enter the player name: ");
		scanf("%s", p.name);
		
		
		p.level = 1;
		p.hp = 100;
		p.attack = 5;
		p.gold = 100;
		p.itemCount = 0;
		savegame(&p);
	}
	else if(startchoice == 2){
		loadegame(&p);
	}

	int choice = 0;
	int choice2 = 0;
	
	while(1){
		choice = 0;
		
		printf("1.Explore\n");
		printf("2.visit shop\n");
		printf("3.view stats\n");
		printf("4.save game\n");
		printf("5.Exit\n");
		
		printf("enter your choice: ");
		scanf("%d", &choice);
		
		if(choice == 1) {
			printf("Exploring...\n");
			explore(&p, locations);
		} 
		else if(choice == 2) {
			printf("Visiting Shop...\n");
			visitShop(&p);
		}
		else if(choice == 3) {
			printf("Player Stats:\n");
			printf("Name: %s\n", p.name);
			printf("Level: %.1f\n", p.level);
			printf("HP: %d\n", p.hp);
			printf("Attack: %d\n", p.attack);
			printf("Gold: %d\n", p.gold);
		}
		else if(choice == 4) {
			printf("Saving game...\n");
			savegame(&p);
		}
		else if(choice == 5) {
			printf("enter 1 for gamesave and exit\n");
			printf("enter 2 for only exit");
			scanf("%d", &choice2);
			if(choice2 == 1){
				savegame(&p);
				printf("Exiting game...\n");
				return 0;
			}
			else{
				printf("Exiting game...\n");
				return 0;
			}
		}
		else {
			printf("Invalid choice! Try again.\n");
		}
    
		printf("\n");
		
		}
	
    return 0;
}
