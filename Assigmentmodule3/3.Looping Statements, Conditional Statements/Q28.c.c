//1 2 3 6 9 18 27 54... 

#include <stdio.h>

int main() {
    int n, i;
    long long current = 1;

    printf("Enter the number of terms to generate: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Generated sequence:\n");
    printf("%lld ", current);

    for (i = 1; i < n; i++) {
        if (i % 2 == 1) {
            current *= 3;
        } else {
            current *= 2;
        }
        printf("%lld ", current);
    }

    printf("\n");
}
