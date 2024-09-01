//Convert days into months

#include <stdio.h>

int main() {
    int days;
    float months;

    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30.44;

    printf("%d days is approximately equal to %.2f months.\n", days, months);
}
