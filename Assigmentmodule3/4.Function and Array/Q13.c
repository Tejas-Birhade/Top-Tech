// 13. WAP to accept 5 numbers from user and check entered number is even or odd 
// using of array 

#include <stdio.h>

#define SIZE 5

// Function prototypes
void checkEvenOdd(int numbers[], int size);

int main() {
    int numbers[SIZE];

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    checkEvenOdd(numbers, SIZE);

}

void checkEvenOdd(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            printf("Number %d is even.\n", numbers[i]);
        } else {
            printf("Number %d is odd.\n", numbers[i]);
        }
    }
}
