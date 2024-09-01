// 10. WAP to perform Palindrome number using for loop and function 

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    return (reversedNum == originalNum);
}
