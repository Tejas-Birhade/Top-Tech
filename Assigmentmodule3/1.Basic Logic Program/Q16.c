// 16.Convert country’s name in abbreviate form 

#include <stdio.h>
#include <string.h>

int main() {
    char country[100];
    int i;

    printf("ENTER THE COUNTRY NAME: ");
    fgets(country, sizeof(country), stdin);
    size_t length = strlen(country);
    if (country[length - 1] == '\n') {
        country[length - 1] = '\0';
    }
    
    printf("ABBREVIATED NAME: ");
    for (i = 0; country[i] != '\0'; i++) {
        if (i == 0 || (country[i - 1] == ' ' && country[i] != ' ')) {
            printf("%c.", country[i]);
        }
    }

    printf("\n");
}
