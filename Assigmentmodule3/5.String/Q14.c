// 14.Write a program in C to combine two strings manually 

#include <stdio.h>

#define MAX_SIZE 200 

int getLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void combineStrings(char *dest, const char *str1, const char *str2) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        dest[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        dest[i] = str2[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

int main() {
    char str1[100], str2[100], combined[MAX_SIZE];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    int len1 = getLength(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len2 = getLength(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    combineStrings(combined, str1, str2);

    printf("Combined string: %s\n", combined);

}
