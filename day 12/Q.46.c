#include <stdio.h>
#include <math.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int number) {
    int original = number;
    int digits = 0;
    int sum = 0;

    if (number < 0) {
        return 0;
    }

    while (number > 0) {
        digits++;
        number /= 10;
    }

    number = original;
    while (number > 0) {
        int digit = number % 10;
        sum += power(digit, digits);
        number /= 10;
    }

    return sum == original;
}

int main(void) {
    int n;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
