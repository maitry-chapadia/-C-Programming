#include <stdio.h>
#include <string.h>

union Book {
    int accession_no;
    char title[50];
    char author[50];
    float price;
    int issued;
};

int main() {
    union Book b;
    int choice;



    printf("Enter Accession Number: ");
    scanf("%d", &b.accession_no);
    int acc_no = b.accession_no;
    printf("Enter Book Title: ");
    getchar();
    fgets(b.title, sizeof(b.title), stdin);
    b.title[strcspn(b.title, "\n")] = '\0';
    char title[50];
    strcpy(title, b.title);

    printf("Enter Author Name: ");
    fgets(b.author, sizeof(b.author), stdin);
    b.author[strcspn(b.author, "\n")] = '\0';
    char author[50];
    strcpy(author, b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);
    float price = b.price;

    printf("Enter Status (1 = Issued, 0 = Available): ");
    scanf("%d", &b.issued);
    int status = b.issued;


    printf("\n----- Book Details -----\n");
    printf("Accession No.: %d\n", acc_no);
    printf("Title         : %s\n", title);
    printf("Author        : %s\n", author);
    printf("Price         : %.2f\n", price);
    printf("Status        : %s\n", (status == 1) ? "ISSUED" : "AVAILABLE");

    return 0;
}
