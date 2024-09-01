//Accept the input month number and print number of days in that
//month

#include <stdio.h>

int main() {
    int monthNumber;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    switch (monthNumber) {
        case 1:
        case 3:
        case 5:
        case 7: 
        case 8:  
        case 10: 
        case 12: 
            printf("31 days\n");
            break;
        case 4:  
        case 6: 
        case 9:  
        case 11: 
            printf("30 days\n");
            break;
        case 2:  
            printf("28 days\n");  
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }
}
