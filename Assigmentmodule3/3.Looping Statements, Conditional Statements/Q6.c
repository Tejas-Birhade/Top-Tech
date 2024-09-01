//6. WAP to print Fibonacci series up to given numbers

#include <stdio.h>

int main() {
    int maxNumber; \
    int first = 0, second = 1; 

    printf("Enter the maximum number for the Fibonacci series: ");
    scanf("%d", &maxNumber);

    printf("Fibonacci series up to %d:\n", maxNumber);
    if (maxNumber >= 0) {
        printf("%d ", first); 
    }
    if (maxNumber >= 1) {
        printf("%d ", second); 
    }

    int next;
    while (1) {
        next = first + second;
        if (next > maxNumber) {
            break;
        }
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n"); 

}
