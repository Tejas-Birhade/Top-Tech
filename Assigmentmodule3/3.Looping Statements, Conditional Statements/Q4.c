//4. WAP to print table up to given numbers

#include <stdio.h>

int main() {
    int maxNumber;  

    printf("Enter the maximum number for which you want to print the multiplication table: ");
    scanf("%d", &maxNumber);

    for (int i = 1; i <= maxNumber; i++) {
        printf("Multiplication Table for %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");  
    }

}
