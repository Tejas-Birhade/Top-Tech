//Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary
#include <stdio.h>

double calculateInsurancePremium(double salary) {
    return 0.10 * salary; 
}

double calculateLoanInstallment(double remainingSalary) {
    return 0.10 * remainingSalary; 
}

int main() {
    double monthlySalary;
    double insurancePremium;
    double remainingSalary;
    double loanInstallment;

    printf("Enter your monthly salary: ");
    scanf("%lf", &monthlySalary);

    insurancePremium = calculateInsurancePremium(monthlySalary);

    remainingSalary = monthlySalary - insurancePremium;

    loanInstallment = calculateLoanInstallment(remainingSalary);

    printf("\nMonthly Salary: %.2f\n", monthlySalary);
    printf("Insurance Premium (10%%): %.2f\n", insurancePremium);
    printf("Remaining Salary after Insurance Premium: %.2f\n", remainingSalary);
    printf("Loan Installment (10%% of remaining salary): %.2f\n", loanInstallment);
}
