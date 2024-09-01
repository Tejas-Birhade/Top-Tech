// 15. Write a program in C to find the largest and smallest words in a string. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLargestAndSmallestWords(const char *str, char *largestWord, char *smallestWord) {
    const char *delimiters = " \t\n";
    char tempStr[100];
    char *word;
    int maxLength = 0, minLength = 100;
    largestWord[0] = '\0'; 
    smallestWord[0] = '\0'; 

    strncpy(tempStr, str, sizeof(tempStr));
    tempStr[sizeof(tempStr) - 1] = '\0'; 

    word = strtok(tempStr, delimiters);
    while (word != NULL) {
        int wordLength = strlen(word);
        
        if (wordLength > maxLength) {
            maxLength = wordLength;
            strcpy(largestWord, word);
        }

        if (wordLength < minLength) {
            minLength = wordLength;
            strcpy(smallestWord, word);
        }

        word = strtok(NULL, delimiters);
    }
}

int main() {
    char str[200];
    char largestWord[100], smallestWord[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    findLargestAndSmallestWords(str, largestWord, smallestWord);

    if (strlen(largestWord) > 0) {
        printf("Largest word: %s\n", largestWord);
    } else {
        printf("No words found.\n");
    }

    if (strlen(smallestWord) > 0) {
        printf("Smallest word: %s\n", smallestWord);
    } else {
        printf("No words found.\n");
    }

}
