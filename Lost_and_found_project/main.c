#include <stdio.h>
#include "auth.h"
#include "items.h"

int main() {
    int ch;
    if (!login()) return 0;

    do {
        printf("\nLost and Found Registry Menu\n");
        printf("Choose Option:\n");
        printf("1. Add item\n2. View item\n3. Search item\n4. Exit\n");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                additem();
                break;
            case 2:
                viewitem();
                break;
            case 3:
                searchitem();
                break;
            case 4:
                printf("Bye!\n");
                break;
            default:
                printf("Invalid Input!\nPlease Try Again!");
        }
    } while(ch != 4);
    
    return 0;
}