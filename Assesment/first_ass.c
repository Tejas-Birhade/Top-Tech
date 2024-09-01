#include <stdio.h>

#define PIZZA_PRICE 180
#define BURGER_PRICE 100
#define DOSA_PRICE 120
#define IDLI_PRICE 50

void print_menu() {
    printf("--------------- Menu ---------------\n");
    printf("1. Pizza          Price = %d rs/pcs\n", PIZZA_PRICE);
    printf("2. Burger         Price = %d rs/pcs\n", BURGER_PRICE);
    printf("3. Dosa           Price = %d rs/pcs\n", DOSA_PRICE);
    printf("4. Idli           Price = %d rs/pcs\n", IDLI_PRICE);
    printf("------------------------------------\n");
}

int calculate_total(int choice, int quantity) {
    int price = 0;
    switch (choice) {
        case 1: price = PIZZA_PRICE; break;
        case 2: price = BURGER_PRICE; break;
        case 3: price = DOSA_PRICE; break;
        case 4: price = IDLI_PRICE; break;
        default: price = 0; break;
    }
    return price * quantity;
}

int main() {
    int choice, quantity;
    int final_amount = 0;
    char continue_order;

    do {
        print_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Invalid choice! Please select a valid option.\n");
            continue;
        }

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        int total_amount = calculate_total(choice, quantity);
        final_amount += total_amount;

        printf("Amount for this order: %d rs\n", total_amount);
        printf("Total amount so far: %d rs\n", final_amount);

        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &continue_order);

    } while (continue_order == 'y' || continue_order == 'Y');

    printf("Final total amount: %d rs\n", final_amount);

    return 0;
}
