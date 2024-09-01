/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746
*/

#include <stdio.h>

int main() {
    int number, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int original = number;

    while (number != 0) {
        remainder = number % 10;      
        reversed = reversed * 10 + remainder; 
        number /= 10;                 
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);
}
