// 4. Write a program in C to count the total number of words in a string. 

#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[100];
    int i = 0, wordCount = 0;
    int inWord = 0; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            if (inWord) {
                inWord = 0;
            }
        } else {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        }
        i++;
    }

    printf("Total number of words: %d\n", wordCount);

}
