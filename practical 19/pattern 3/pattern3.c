#include <stdio.h>

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) printf("  ");

        for (int k = i; k >= 1; k--) printf("%d ", k);
        for (int k = 2; k <= i; k++) printf("%d ", k);

        printf("\n");
    }

    for (int i = 2; i <= n; i++) {
        for (int s = 0; s < n - i; s++) printf("  ");

        for (int k = i; k >= 1; k--) printf("%d ", k);
        for (int k = 2; k <= i; k++) printf("%d ", k);

        printf("\n");
    }

    return 0;
}
