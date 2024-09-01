// WAP to reverse a string and check that the string is palindrome or not 
// Write a program of structure employee that provides the following 
// a. information -print and display empno, empname, address 
// andage 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void reverseString(char str[]);
bool isPalindrome(char str[]);

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    reverseString(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;
    
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

bool isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
