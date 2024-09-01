//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-

#include <stdio.h>

int main() {
    float bill, finalBill;
    printf("Enter the bill amount: ");
    scanf("%f", &bill);
    if (bill < 256) {
        printf("The minimum bill amount is Rs. 256. Your bill amount is too low.\n");
        finalBill = 256;
    } else {
        if (bill > 800) {
            finalBill = bill + (bill * 0.18);
        } else {
            finalBill = bill;
        }
    }
    printf("The final bill amount is: Rs. %.2f\n", finalBill);
}
