// 16.Accept 5 numbers from user and perform sum of array 

#include <stdio.h>

#define SIZE 5

void inputArray(int arr[], int size);
int sumArray(int arr[], int size);

int main() {
    int numbers[SIZE];
    int totalSum;

    printf("Enter %d numbers:\n", SIZE);
    inputArray(numbers, SIZE);

    totalSum = sumArray(numbers, SIZE);

    printf("The sum of the array elements is: %d\n", totalSum);

    return 0;
}

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
