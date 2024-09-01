//WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    if (b != 0) {
        a = a * b;     
        b = a / b;     
        a = a / b;    
        
        printf("After swapping:\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    } else {
        printf("Cannot swap because b is zero.\n");
    }
}
