#include <stdio.h>

int main() {
    float amount, discount = 0, finalAmount;

    printf("Enter total shopping amount: ₹");
    scanf("%f", &amount);

    if (amount < 1000) {
        discount = 0;
    } else if (amount <= 5000) {
        discount = amount * 0.10;  // 10% discount
    } else {
        discount = amount * 0.20;  // 20% discount
    }

    finalAmount = amount - discount;

    printf("Discount Applied: ₹%.2f\n", discount);
    printf("Total Bill after Discount: ₹%.2f\n", finalAmount);

    return 0;
}
