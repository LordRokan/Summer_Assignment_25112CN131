#include <stdio.h>

int main(void) {
    unsigned int decimal;
    unsigned int binary[32];
    int index = 0;

    printf("Enter a non-negative decimal number: ");
    if (scanf("%u", &decimal) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (decimal == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }

    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%u", binary[i]);
    }
    printf("\n");

    return 0;
}
