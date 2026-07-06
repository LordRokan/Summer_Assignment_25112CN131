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

    printf("Common elements are:\n");
    int found = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d\n", a[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No common elements\n");
    }

    return 0;
}
