//14.Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    while (n > 1) {
        result *= n;
        n--;
    }
    return result;
}

int main() {
    int numbers[5];
    
    printf("Enter 5 positive integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] < 0) {
            printf("Factorial of a negative number does not exist. Skipping...\n");
            numbers[i] = -1; 
        }
    }

    printf("\nFactorials:\n");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] >= 0) {
            printf("Factorial of %d is %llu\n", numbers[i], factorial(numbers[i]));
        }
    }

}
