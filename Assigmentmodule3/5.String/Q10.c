// 10. Write a program in C to extract a substring from a given string 

#include <stdio.h>
#include <string.h>

void extractSubstring(const char *source, char *destination, int start, int length) {
    int i;
    if (start < 0 || start >= strlen(source)) {
        printf("Start index is out of bounds.\n");
        destination[0] = '\0'; 
        return;
    }

    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        destination[i] = source[start + i];
    }
    
    destination[i] = '\0';
}

int main() {
    char str[100];
    char substring[100];
    int start, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Enter the start index: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    extractSubstring(str, substring, start, length);

    printf("Extracted substring: %s\n", substring);

}
