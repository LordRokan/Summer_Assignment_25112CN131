#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[100];
    printf("Enter %d elements of first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[100];
    printf("Enter %d elements of second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int merged[200];
    for (int i = 0; i < n1; i++) {
        merged[i] = a[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = b[i];
    }

    printf("Merged array is:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
