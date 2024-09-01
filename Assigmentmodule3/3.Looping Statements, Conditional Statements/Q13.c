//13.calculate the Factorial of a Given Number using while loop

#include <stdio.h>

int main() {
    int number, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        int temp = number; 
        while (temp > 1) {
            factorial *= temp; 
            temp--;             
        }

        printf("Factorial of %d is %d\n", number, factorial);
    }

}
