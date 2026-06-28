#include <stdio.h>
#include <string.h>

int main(void) {
    char binary[65];
    unsigned long decimal = 0;

    printf("Enter a binary number: ");
    if (scanf("%64s", binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    size_t len = strlen(binary);
    for (size_t i = 0; i < len; i++) {
        char digit = binary[i];
        if (digit != '0' && digit != '1') {
            printf("Invalid binary number. Only 0 and 1 are allowed.\n");
            return 1;
        }
        decimal = decimal * 2 + (digit - '0');
    }

    printf("Decimal: %lu\n", decimal);
    return 0;
}
