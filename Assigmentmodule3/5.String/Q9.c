// 9. Write a program in C to find the maximum number of characters in a string. 

#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256 

int main() {
    char str[100];
    int frequency[MAX_CHARS] = {0}; 
    int maxFrequency = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i]; 
        frequency[ch]++;
    }

    for (int i = 0; i < MAX_CHARS; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            maxChar = (char)i;
        }
    }

    if (maxFrequency > 0) {
        printf("The maximum number of occurrences is %d for the character '%c'.\n", maxFrequency, maxChar);
    } else {
        printf("The string is empty or has no characters.\n");
    }

}
