#include <stdio.h>

int main() {
    int choice, quantity;
    int total = 0;
    int price;

    printf("Welcome to Foodies Restaurant!\n");
    printf("Menu:\n");
    printf("1. Burger - ₹150\n");
    printf("2. Pizza - ₹200\n");
    printf("3. Pasta - ₹120\n");
    printf("4. Sandwich - ₹100\n");
    printf("5. French Fries - ₹80\n");
    printf("Enter 0 to finish ordering.\n");

    while (1) {
        printf("\nEnter the number of the item you want to order (0 to finish): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break; // exit the loop if finished
        }

        if (choice < 0 || choice > 5) {
            printf("Invalid choice! Please select a valid menu number.\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (quantity <= 0) {
            printf("Invalid quantity! Please enter a positive number.\n");
            continue;
        }

        switch (choice) {
            case 1: price = 150; break;
            case 2: price = 200; break;
            case 3: price = 120; break;
            case 4: price = 100; break;
            case 5: price = 80; break;
        }

        total += price * quantity;
        printf("Added %d x item #%d to your order.\n", quantity, choice);
    }

    printf("\nTotal amount to pay: ₹%d\n", total);
    printf("Thank you for ordering at Foodies!\n");

    return 0;
}
