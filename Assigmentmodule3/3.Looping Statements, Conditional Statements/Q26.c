// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) 

#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        int triangular_sum = 0;
        for (j = 1; j <= i; j++) {
            triangular_sum += j;
        }
        sum += triangular_sum;
    }

    printf("The sum of the series is: %d\n", sum);

}
