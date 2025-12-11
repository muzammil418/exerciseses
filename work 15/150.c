#include <stdio.h>
#include <string.h>

#define MAX_STOPS 50

enum Status {
    ON_TIME,
    LATE,
    VERY_LATE
};

struct Stop {
    char name[40];
    int schedHour;
    int schedMin;
    int actHour;
    int actMin;
    int delay;
    int status;
};

int readRoute(struct Stop stops[], int max) {
    FILE *fp = fopen("route.txt", "r");
    if (!fp) {
        printf("Error: route.txt not found!\n");
        return 0;
    }

    int count = 0;
    while (count < max &&
           fscanf(fp, "%[^,],%d:%d\n",
                  stops[count].name,
                  &stops[count].schedHour,
                  &stops[count].schedMin) == 3) {
        count++;
    }

    fclose(fp);
    return count;
}

void enterActualTimes(struct Stop stops[], int count) {
    printf("\nEnter actual arrival times (HH MM) for each stop:\n");
    for (int i = 0; i < count; i++) {
        printf("%s: ", stops[i].name);
        scanf("%d %d", &stops[i].actHour, &stops[i].actMin);
    }
}

int timeToMinutes(int hour, int min) {
    return hour * 60 + min;
}

void computeDelay(struct Stop *s) {
    int scheduled = timeToMinutes(s->schedHour, s->schedMin);
    int actual    = timeToMinutes(s->actHour, s->actMin);
    s->delay      = actual - scheduled;
}

void classifyStatus(struct Stop *s) {
    if (s->delay <= 3)
        s->status = ON_TIME;
    else if (s->delay <= 10)
        s->status = LATE;
    else
        s->status = VERY_LATE;
}

void analyze(struct Stop stops[], int count) {
    for (int i = 0; i < count; i++) {
        computeDelay(&stops[i]);
        classifyStatus(&stops[i]);
    }
}

void printReport(struct Stop stops[], int count) {
	printf("\n-----------------------------------\n");
    printf("        Route Delay Report\n");
    printf("-----------------------------------\n\n");
	
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, stops[i].name);
        printf("   Scheduled: %02d:%02d\n", stops[i].schedHour, stops[i].schedMin);
        printf("   Actual:    %02d:%02d\n", stops[i].actHour, stops[i].actMin);
        printf("   Delay:     %d min\n", stops[i].delay);

        if (stops[i].status == ON_TIME)
            printf("   Status:    ON_TIME\n\n");
        else if (stops[i].status == LATE)
            printf("   Status:    LATE\n\n");
        else
            printf("   Status:    VERY_LATE\n\n");
    }
	
	printf("-----------------------------------\n");

}

void saveReport(struct Stop stops[], int count, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        printf("Error: Could not create report file!\n");
        return;
    }
	
	fprintf(fp, "-----------------------------------\n");
    fprintf(fp, "        Route Delay Report\n");
    fprintf(fp, "-----------------------------------\n\n");

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d. %s\n", i + 1, stops[i].name);
        fprintf(fp, "   Scheduled: %02d:%02d\n", stops[i].schedHour, stops[i].schedMin);
        fprintf(fp, "   Actual:    %02d:%02d\n", stops[i].actHour, stops[i].actMin);
        fprintf(fp, "   Delay:     %d min\n", stops[i].delay);

        if (stops[i].status == ON_TIME)
            fprintf(fp, "   Status:    ON_TIME\n\n");
        else if (stops[i].status == LATE)
            fprintf(fp, "   Status:    LATE\n\n");
        else
            fprintf(fp, "   Status:    VERY_LATE\n\n");
    }
	
	fprintf(fp, "-----------------------------------\n");
    fclose(fp);

    printf("\nReport saved to: %s\n", filename);
}

int main() {
    struct Stop stops[MAX_STOPS];
    int count;

    count = readRoute(stops, MAX_STOPS);
    if (count == 0) {
        printf("No stops found or file missing.\n");
        return 1;
    }

    enterActualTimes(stops, count);
    analyze(stops, count);
    printReport(stops, count);
    saveReport(stops, count, "report.txt");

    return 0;
}
