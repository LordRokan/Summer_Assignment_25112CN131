#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int a = 0;
    int b = 1;
    int next;

    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main(void) {
    int n;

    printf("Enter the position of Fibonacci number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}
