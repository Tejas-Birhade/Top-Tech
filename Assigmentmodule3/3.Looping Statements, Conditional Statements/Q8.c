//8. Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)

#include <stdio.h>

int main() {
    int number, maxDigit = -1, digit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;       
        if (digit > maxDigit) {
            maxDigit = digit;      
        }
        number /= 10; 
    }

    printf("Max digit is: %d\n", maxDigit);

}
