#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    double val;
    for (int i = 0; i < r; ++i) {
        double sum = 0.0;
        for (int j = 0; j < c; ++j) {
            if (scanf("%lf", &val) != 1) { fprintf(stderr, "Invalid input\n"); return 1; }
            sum += val;
        }
        printf("%.2f\n", sum);
    }

    return 0;
}
