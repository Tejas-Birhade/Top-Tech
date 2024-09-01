//Accept 2 numbers and find out its sum check it size

#include <stdio.h>
#include <limits.h>

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int sum = num1 + num2;
    printf("Sum of %d and %d is %d.\n", num1, num2, sum);
    printf("Size of the sum (in bytes): %lu\n", sizeof(sum));
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    
}
