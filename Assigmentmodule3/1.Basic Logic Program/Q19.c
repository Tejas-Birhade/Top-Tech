// 19.Calculate compound interest 

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, amount;
    int timesCompounded, years;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the number of times the interest is compounded per year: ");
    scanf("%d", &timesCompounded);
    printf("Enter the number of years the money is invested or borrowed for: ");
    scanf("%d", &years);

    rate = rate / 100.0;
    amount = principal * pow((1 + rate / timesCompounded), timesCompounded * years);
    printf("The amount of money accumulated after %d years is: %.2lf\n", years, amount);
}
