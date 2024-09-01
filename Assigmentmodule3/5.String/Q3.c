// 3. Write a program in C to print individual characters of a string in reverse order 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    printf("Individual characters in reverse order:\n");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

}
