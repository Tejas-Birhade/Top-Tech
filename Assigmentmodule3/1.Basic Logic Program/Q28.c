//Convert years into days and months

#include <stdio.h>

int main() {
    int years, days, months;

    printf("Enter number of years: ");
    scanf("%d", &years);

    months = years * 12; 

    days = years * 365.25; 

    printf("%d years is equal to %d months and approximately %d days.\n", years, months, days);
}
