#include <stdio.h>

int main(void) {
    double x;
    int n;
    double result = 1.0;
    int exponent;

    printf("Enter base x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter exponent n: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    exponent = n;
    if (exponent < 0) {
        x = 1.0 / x;
        exponent = -exponent;
    }

    while (exponent > 0) {
        if (exponent & 1) {
            result *= x;
        }
        x *= x;
        exponent >>= 1;
    }

    printf("Result: %.6f\n", result);
    return 0;
}
