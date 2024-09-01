// 17. Calculate person’s insurance premium based on salary 

#include <stdio.h>

#define PREMIUM_PERCENTAGE 5.0 

double calculatePremium(double salary) {
    return (salary * PREMIUM_PERCENTAGE) / 100.0;
}

int main() {
    double salary;
    double premium;

    printf("Enter the salary: ");
    scanf("%lf", &salary);

    premium = calculatePremium(salary);

    printf("The insurance premium based on a salary of %.2lf is: %.2lf\n", salary, premium);
}
