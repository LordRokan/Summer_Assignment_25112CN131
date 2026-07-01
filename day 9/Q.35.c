#include <stdio.h>

int main() {
    int n;
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
