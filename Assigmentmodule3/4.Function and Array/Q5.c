// WAP to take two Array input from user and sort them in ascending or 
// descending order as per user’s choice

#include <stdio.h>

void inputArray(int arr[], int size);
void printArray(int arr[], int size);
void bubbleSort(int arr[], int size, int ascending);

int main() {
    int size1, size2;
    int choice;
    
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    
    int arr1[size1];
    
    printf("Enter the elements of the first array:\n");
    inputArray(arr1, size1);
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    
    int arr2[size2];
    
    printf("Enter the elements of the second array:\n");
    inputArray(arr2, size2);
    
    printf("\nChoose the sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    printf("\nOriginal first array:\n");
    printArray(arr1, size1);
    
    bubbleSort(arr1, size1, choice == 1);
    
    printf("Sorted first array:\n");
    printArray(arr1, size1);
    
    printf("\nOriginal second array:\n");
    printArray(arr2, size2);
    
    bubbleSort(arr2, size2, choice == 1);
    
    printf("Sorted second array:\n");
    printArray(arr2, size2);
    
}

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size, int ascending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
