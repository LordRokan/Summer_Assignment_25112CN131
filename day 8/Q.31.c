#include <stdio.h>

int main() {
    int rows;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter a character: ");
    scanf(" %c", &ch);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
