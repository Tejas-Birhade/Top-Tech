// 12. Write a program in C to find the number of times a given word 'is' appears in 
// the given string.

#include <stdio.h>
#include <string.h>

int countOccurrences(const char *str, const char *word) {
    int count = 0;
    int lenStr = strlen(str);
    int lenWord = strlen(word);

    for (int i = 0; i <= lenStr - lenWord; i++) {
        if (strncmp(&str[i], word, lenWord) == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];
    const char *word = "is"; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int occurrences = countOccurrences(str, word);

    printf("The word '%s' appears %d times in the given string.\n", word, occurrences);

}
