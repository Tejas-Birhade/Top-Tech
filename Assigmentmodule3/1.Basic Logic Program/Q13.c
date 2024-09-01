// Find character value from ascii
#include <stdio.h>

int main() {
    int asciiValue;
    char character;

    printf("Enter an ASCII value (integer between 0 and 255): ");
    scanf("%d", &asciiValue);

    if (asciiValue < 0 || asciiValue > 255) {
        printf("Invalid ASCII value. Please enter a value between 0 and 255.\n");
        return 1;
    }
    character = (char)asciiValue;
    printf("The character for ASCII value %d is '%c'.\n", asciiValue, character);
}
