// 14.Find ascii value of given number 

#include <stdio.h>

int main() {
    char character;
    int asciiValue;

    printf("Enter a character: ");
    scanf("%c", &character);

    asciiValue = (int)character;

    printf("The ASCII value of '%c' is %d.\n", character, asciiValue);
}
