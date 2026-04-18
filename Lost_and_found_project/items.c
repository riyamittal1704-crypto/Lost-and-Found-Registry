#include <stdio.h>
#include <string.h>
#include "helpers.h"
#include "items.h"

void additem() {
    char name[50], place[50];
    FILE *f = fopen(LOST_FOUND_FILE, "a");
    
    printf("Enter name of item:\n");
    getchar();
    scanf("%[^\n]", name);
    
    printf("Enter place where item was found:\n");
    getchar();
    scanf("%[^\n]", place);
    
    fprintf(f, "%s,%s\n", name, place);
    fclose(f);
    printf("Item added!\n");
}

void viewitem() {
    char line[100];
    FILE *f = fopen(LOST_FOUND_FILE, "r");

    if(f == NULL) {
        printf("No items recorded yet!\n");
        return;
    }
    
    printf("--All items--\n");
    while(fgets(line, sizeof(line), f)) {
        printf("%s", line);
    }
    
    fclose(f);
}

void searchitem() {
    char line[100], search[20];
    FILE *f = fopen(LOST_FOUND_FILE, "r");
    int found = 0;

    printf("Enter name of item:\n");
    getchar();
    scanf("%[^\n]", search);
    
    if(f == NULL) {
        printf("No items found!\n");
        return;
    }
    
    printf("--Search Items--\n");
    while(fgets(line, sizeof(line), f)) {
        if(strstr(line, search)) {
            printf("%s", line);
            found = 1;
        }
    }

    if(!found) {
        printf("Item not found.\n");
    }

    fclose(f);
}