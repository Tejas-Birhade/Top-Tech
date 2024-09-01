//11.Accept 5 names from user at run time.

#include <stdio.h>

#define MAX_NAMES 5
#define MAX_LENGTH 100

int main() {
    char names[MAX_NAMES][MAX_LENGTH]; 

    printf("Enter %d names:\n", MAX_NAMES);
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], MAX_LENGTH, stdin);

        size_t length = strlen(names[i]);
        if (length > 0 && names[i][length - 1] == '\n') {
            names[i][length - 1] = '\0';
        }
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

}
