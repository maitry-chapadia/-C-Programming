#include <stdio.h>

#define TICKET 100

int main() {
    int age, group;
    float cost = 0;
    char type;

    printf("Enter visitor type (C=Child, A=Adult, S=Senior): ");
    scanf(" %c", &type);
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 0 || age > 120) {
        printf("Invalid age.\n");
    }
    else if ((type == 'C' || type == 'c') && age < 12) {
        printf("Child: Free Entry.\n");
    }
    else if ((type == 'S' || type == 's') && age >= 60) {
        cost = TICKET * 0.5;
        printf("Senior: Ticket = ₹%.2f\n", cost);
    }
    else if ((type == 'A' || type == 'a') && age >= 12 && age < 60) {
        printf("Enter group size: ");
        scanf("%d", &group);
        if (group > 5)
            cost = group * TICKET * 0.9;
        else
            cost = group * TICKET;
        printf("Adult Group: Total = ₹%.2f\n", cost);
    }
    else {
        printf("Invalid category for entered age.\n");
    }

    return 0;
}
