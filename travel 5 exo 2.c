#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int JJ, MM, AA;
} DATE;

void trier_dates(DATE dates[], int n) {
    int i, j;
    DATE temp;
    
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(dates[i].AA > dates[j].AA || (dates[i].AA == dates[j].AA && dates[i].MM > dates[j].MM) 
                || (dates[i].AA == dates[j].AA && dates[i].MM == dates[j].MM && dates[i].JJ > dates[j].JJ)) {
                temp = dates[i];
                dates[i] = dates[j];
                dates[j] = temp;
            }
        }
    }
}

int main() {
    DATE dates[5] = {{2, 5, 2022}, {15, 3, 2021}, {8, 1, 2023}, {27, 11, 2022}, {12, 7, 2021}};
    int i;

    printf("Dates non triees :\n");
    for(i=0; i<5; i++) {
        printf("%d/%d/%d\n", dates[i].JJ, dates[i].MM, dates[i].AA);
    }

    trier_dates(dates, 5);

    printf("\nDates triees :\n");
    for(i=0; i<5; i++) {
        printf("%d/%d/%d\n", dates[i].JJ, dates[i].MM, dates[i].AA);
    }

    return 0;
}
