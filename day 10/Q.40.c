#include <stdio.h>

int main(void) {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%c", 'a' + j);
        }
        printf("\n");
    }

    return 0;
}
