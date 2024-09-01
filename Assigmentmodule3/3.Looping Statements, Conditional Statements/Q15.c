//15.Calculate sum of 10 numbers using of while loop


#include <stdio.h>

int main() {
    int count = 0; 
    int number;    
    int sum = 0;   

    printf("Enter 10 numbers:\n");

    while (count < 10) {
        printf("Number %d: ", count + 1);
        scanf("%d", &number);  
        sum += number;         
        count++;               
    }

    printf("Sum of the 10 numbers is: %d\n", sum);

}
