#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int x, y;

    printf("Enter two integers: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    int maximum = max(x, y);
    printf("The maximum of %d and %d is %d\n", x, y, maximum);

    return 0;
}
