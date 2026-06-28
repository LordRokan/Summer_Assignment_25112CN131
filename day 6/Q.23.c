#include <stdio.h>

int main(void) {
    unsigned int number;
    unsigned int count = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%u", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    while (number) {
        count += number & 1;
        number >>= 1;
    }

    printf("Number of set bits: %u\n", count);
    return 0;
}
