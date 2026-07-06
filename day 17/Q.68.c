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

    int unionArr[200];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        int exists = 0;
        for (int j = 0; j < k; j++) {
            if (a[i] == unionArr[j]) {
                exists = 1;
                break;
            }
        }
        if (!exists) {
            unionArr[k] = a[i];
            k++;
        }
    }

    for (int i = 0; i < n2; i++) {
        int exists = 0;
        for (int j = 0; j < k; j++) {
            if (b[i] == unionArr[j]) {
                exists = 1;
                break;
            }
        }
        if (!exists) {
            unionArr[k] = b[i];
            k++;
        }
    }

    printf("Union of arrays is:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}
