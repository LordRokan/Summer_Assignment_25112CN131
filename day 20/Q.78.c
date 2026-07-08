#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    if (r != c) {
        printf("Not symmetric\n");
        return 0;
    }

    double *m = malloc((size_t)r * c * sizeof(double));
    if (!m) { perror("malloc"); return 1; }
    for (int i = 0; i < r * c; ++i) {
        if (scanf("%lf", &m[i]) != 1) { fprintf(stderr, "Invalid input\n"); free(m); return 1; }
    }

    const double eps = 1e-9;
    int symmetric = 1;
    for (int i = 0; i < r && symmetric; ++i) {
        for (int j = i + 1; j < c; ++j) {
            if (fabs(m[i * c + j] - m[j * c + i]) > eps) { symmetric = 0; break; }
        }
    }

    printf("%s\n", symmetric ? "Symmetric" : "Not symmetric");
    free(m);
    return 0;
}
