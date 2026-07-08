#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r1, c1, r2, c2;
    if (scanf("%d %d", &r1, &c1) != 2) return 0;

    double *a = malloc((size_t)r1 * c1 * sizeof(double));
    if (!a) { perror("malloc"); return 1; }
    for (int i = 0; i < r1 * c1; ++i) {
        if (scanf("%lf", &a[i]) != 1) { fprintf(stderr, "Invalid input for matrix A\n"); return 1; }
    }

    if (scanf("%d %d", &r2, &c2) != 2) { fprintf(stderr, "Missing dimensions for matrix B\n"); return 1; }
    if (c1 != r2) { fprintf(stderr, "Incompatible dimensions: %d != %d\n", c1, r2); return 1; }

    double *b = malloc((size_t)r2 * c2 * sizeof(double));
    if (!b) { perror("malloc"); return 1; }
    for (int i = 0; i < r2 * c2; ++i) {
        if (scanf("%lf", &b[i]) != 1) { fprintf(stderr, "Invalid input for matrix B\n"); return 1; }
    }

    double *c = calloc((size_t)r1 * c2, sizeof(double));
    if (!c) { perror("calloc"); return 1; }

    for (int i = 0; i < r1; ++i) {
        for (int k = 0; k < c1; ++k) {
            double av = a[i * c1 + k];
            for (int j = 0; j < c2; ++j) {
                c[i * c2 + j] += av * b[k * c2 + j];
            }
        }
    }

    printf("%d %d\n", r1, c2);
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%.2f", c[i * c2 + j]);
            if (j + 1 < c2) putchar(' ');
        }
        putchar('\n');
    }

    free(a);
    free(b);
    free(c);
    return 0;
}
