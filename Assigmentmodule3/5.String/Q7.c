// 7. Write a program in C to copy one string to another string. 

#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i = 0;

    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    while (source[i] != '\0') {
        if (source[i] == '\n') {
            source[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 

    printf("The copied string is: %s\n", destination);

}
