

#include <stdio.h>

int main() {
    int age;

    do {
        printf("\n--- Spark Savings Bank ---\n");
        printf("1. Check Eligibility\n");





            printf("Enter customer's age: ");
            scanf("%d", &age);

            if (age < 0 || age > 120) {
                printf("Invalid age. Please enter a value between 0 and 120.\n");
            }
            else if (age < 18) {
                printf("Not eligible to open a savings account.\n");
            }
            else if (age >= 18 && age < 60) {
                printf("Eligible for Regular Savings Account.\n");
            }
            else {
                printf("Eligible for Senior Citizen Savings Account.\n");
            }






     'while');

    return 0;
}
