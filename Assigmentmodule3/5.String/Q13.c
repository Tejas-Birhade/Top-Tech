// 13. Write a program in C to remove characters from a string except alphabets. 

#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[100];
    char result[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("String with only alphabets: %s\n", result);

}
