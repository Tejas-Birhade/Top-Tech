//16.Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; 
    }

    while (i <= n) {
        sum += i;  
        i++;       
    }

    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

}
