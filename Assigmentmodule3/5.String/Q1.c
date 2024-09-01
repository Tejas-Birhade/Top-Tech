// 1. Write a program in C to find the length of a string without using library 
// functions.
#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char myString[] = "Hello, World!";
    
    int length = stringLength(myString);
    
    printf("The length of the string is: %d\n", length);
    
}
