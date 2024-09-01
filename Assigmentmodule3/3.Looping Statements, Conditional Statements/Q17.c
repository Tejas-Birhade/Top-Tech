//17.Calculate 5 numbers from user and calculate number of even and odd using
//of while loop

#include <stdio.h>

int main() {
    int numbers[5];
    int evenCount = 0, oddCount = 0;
    int i = 0;

    printf("Enter 5 numbers:\n");
    while (i < 5) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        i++;
    }

    i = 0;

    while (i < 5) {
        if (numbers[i] % 2 == 0) {
            evenCount++;  
        } else {
            oddCount++;   
        }
        i++;
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

}
