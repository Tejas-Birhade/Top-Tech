//Accept 5 expense from user and find average of expense

#include <stdio.h>

int main() {
    float expenses[5];
    float total_expense = 0;
    float average_expense;

    printf("Enter 5 expenses:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Expense %d: $", i + 1);
        scanf("%f", &expenses[i]); 
        total_expense += expenses[i]; 
    }

    average_expense = total_expense / 5;

    printf("\nTotal expense: $%.2f\n", total_expense);
    printf("Average expense: $%.2f\n", average_expense);
}
