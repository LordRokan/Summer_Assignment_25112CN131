#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    double *col_sum = calloc((size_t)c, sizeof(double));
    if (!col_sum) { perror("calloc"); return 1; }

    double val;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (scanf("%lf", &val) != 1) { fprintf(stderr, "Invalid input\n"); free(col_sum); return 1; }
            col_sum[j] += val;
        }
    }

    for (int j = 0; j < c; ++j) {
        printf("%.2f\n", col_sum[j]);
    }

    free(col_sum);
    return 0;
}
