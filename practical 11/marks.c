#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    grade = (marks >= 90 && marks <= 100) ? 'A' :
            (marks >= 80 && marks < 90) ? 'B' :
            (marks >= 70 && marks < 80) ? 'C' :
            (marks >= 60 && marks < 70) ? 'D' :
            (marks >= 0 && marks < 60) ? 'F' : 'X';

    if (grade == 'X')
        printf("Invalid input! Marks should be between 0 and 100.\n");
    else
        printf("Grade: %c\n", grade);

    return 0;
}
