/*Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00*/

#include <stdio.h>

int main() {
    int customerID;
    char name[50];
    float units, bill;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Units Consumed: ");
    scanf("%f", &units);
    if (units <= 350) {
        bill = units * 1.20;
    } else if (units > 350 && units < 600) {
        bill = units * 1.50;
    } else if (units >= 600 && units < 800) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }
    printf("\nElectricity Bill Details:\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Bill: %.2f\n", bill);
}
