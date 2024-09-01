// 7. WAP Find out length of string without using inbuilt function 

#include <stdio.h>

int stringLength(const char *str);

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    int length = stringLength(str);
    
    printf("Length of the string: %d\n", length);
    
    return 0;
}

int stringLength(const char *str) {
    int length = 0;
    
    while (*str != '\0') {
        length++;
        str++;
    }
    
    return length;
}
