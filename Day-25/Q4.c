//WAP to sort word by length
#include <stdio.h>
#include <string.h>

int main() {
    char items[5][50] = {"python", "is", "a", "great", "language"};
    int total = 5;
    char hold[50];

    // Simple bubble sort based on length
    for(int x = 0; x < total - 1; x++) {
        for(int y = 0; y < total - x - 1; y++) {
            // Compare lengths instead of alphabetical values
            if(strlen(items[y]) > strlen(items[y+1])) {
                // Swap elements
                strcpy(hold, items[y]);
                strcpy(items[y], items[y+1]);
                strcpy(items[y+1], hold);
            }
        }
    }

    printf("Words sorted by length:\n");
    for(int x = 0; x < total; x++) {
        printf("%s\n", items[x]);
    }

    return 0;
}