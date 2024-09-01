//12.Program of Armstrong Number in C Using For Loop & While Loop


#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, sum = 0, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    for (int temp = number; temp != 0; temp /= 10) {
        digits++;
    }

    for (int temp = number; temp != 0; temp /= 10) {
        int digit = temp % 10;
        sum += pow(digit, digits);
    }

    if (sum == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

}
