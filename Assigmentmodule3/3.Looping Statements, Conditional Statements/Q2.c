//2. WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>

int main() {
    int numbers[5]; 

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: %d\n", i + 1, numbers[i]); 
    }

}
