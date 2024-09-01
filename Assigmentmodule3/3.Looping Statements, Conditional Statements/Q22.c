//Accept 3 numbers from user using while loop and check each numbers 
//palindrome 

#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    int remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int count = 0;
    int number;

    while (count < 3) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (isPalindrome(number)) {
            printf("%d is a palindrome.\n", number);
        } else {
            printf("%d is not a palindrome.\n", number);
        }

        count++;
    }

}
