//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)


#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;       
        sum += digit;              
        number /= 10;              
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}
