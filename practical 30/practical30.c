#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *p, t;

    printf("Enter number of items: ");
    if (scanf("%d", &n) != 1 || n <= 0) return printf("Invalid number.\n"), 1;

    p = malloc(n * sizeof(float));
    if (!p) return printf("Memory error.\n"), 1;

    printf("Enter %d prices: ", n);
    for (int i = 0; i < n; i++) scanf("%f", p + i);

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (*(p + j) > *(p + j + 1)) {
                t = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = t;
            }

    printf("Sorted: ");
    for (int i = 0; i < n; i++) printf("%.2f ", *(p + i));
    free(p);
}
