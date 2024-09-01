//Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include <stdio.h>
#include <math.h>

int main() {
    double principal = 1000;    
    double rate = 5;          
    double time = 3;            
    
    double amount = principal * pow(1 + rate / 100, time);

    double compound_interest = amount - principal;

    printf("Principal amount: $%.2f\n", principal);
    printf("Annual interest rate: %.2f%%\n", rate);
    printf("Time period (years): %.2f\n", time);
    printf("Amount accumulated: $%.2f\n", amount);
    printf("Compound interest: $%.2f\n", compound_interest);
}
