// 18. Calculate person’s Annual salary 

#include <stdio.h>

int main() {
    double monthlySalary;
    double annualSalary;

    printf("Enter the monthly salary: ");
    scanf("%lf", &monthlySalary);
  
    annualSalary = monthlySalary * 12;

    printf("The annual salary based on a monthly salary of %.2lf is: %.2lf\n", monthlySalary, annualSalary);
}
