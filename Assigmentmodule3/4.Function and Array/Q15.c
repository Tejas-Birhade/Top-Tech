// 15. Store 5 numbers in array and sort it in ascending order 

#include <stdio.h>

#define SIZE 5

void inputArray(int arr[], int size);
void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int numbers[SIZE];

    printf("Enter %d numbers:\n", SIZE);
    inputArray(numbers, SIZE);

    bubbleSort(numbers, SIZE);

    printf("\nNumbers in ascending order:\n");
    printArray(numbers, SIZE);

    return 0;
}

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void bubbleSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
