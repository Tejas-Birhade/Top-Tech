//Write a program you have to make a summation of first and last Digit. (E.g.,
//1234 Ans: -5)

#include <stdio.h>
#include <math.h>

int main() {
    int number, original, firstDigit, lastDigit;
    
    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number;

    if (number < 0) {
        number = -number;
    }

    lastDigit = number % 10;

    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    int sum = firstDigit + lastDigit;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum of first and last digit: %d\n", sum);

}
