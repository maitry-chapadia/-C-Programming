#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void displayTime(int total_seconds)

 {
    int minutes, seconds;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;
    printf("%02d:%02d\n", minutes, seconds);
}

int getValidSeconds()
 {
    int seconds;
    while (1) {
        printf("Enter countdown time in seconds (non-negative): ");
        if (scanf("%d", &seconds) != 1 || seconds < 0) {
            printf("Invalid input. Please enter a non-negative number.\n");
            while(getchar() != '\n');
        } else {
            return seconds;
        }
    }
}

int main() {
    char choice;

    do {
        int seconds = getValidSeconds();

        printf("Countdown starting from %d seconds...\n", seconds);
        while (seconds >= 0) {
            displayTime(seconds);
            sleep(1);
            seconds--;
        }

        printf("Countdown completed!\n");

        printf("Do you want to start another countdown? (y/n): ");
        while(getchar() != '\n'); // Clear buffer
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program terminated.\n");

    return 0;
}
