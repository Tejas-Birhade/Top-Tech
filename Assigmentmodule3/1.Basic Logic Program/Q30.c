//WAP to convert years into days and days into years

#include <stdio.h>

void yearsToDays() {
    int years;
    printf("Enter the number of years: ");
    scanf("%d", &years);
    
    int days = years * 365; 
    printf("%d years is equal to %d days.\n", years, days);
}

void daysToYears() {
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    int years = days / 365;
    printf("%d days is equal to %d years.\n", days, years);
}

int main() {
    int choice;
    printf("Menu:\n");
    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        yearsToDays();
    } else if (choice == 2) {
        daysToYears();
    } else if (choice == 3) {
        printf("Exiting the program.\n");
    } else {
        printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }
}
