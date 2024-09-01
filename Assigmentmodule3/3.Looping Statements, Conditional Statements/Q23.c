//C Program to Reverse a Number Using FOR Loop 


#include <stdio.h>

int main() {
    int num, reversed = 0, original_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    for (; num != 0; num /= 10) {
        int digit = num % 10;    
        reversed = reversed * 10 + digit; 
    }

    printf("Reversed number of %d is %d\n", original_num, reversed);

}
