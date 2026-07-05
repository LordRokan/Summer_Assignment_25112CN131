#include <stdio.h>

#define SIZE 100

int main() {
    int arr[SIZE];
    int n, key, i, found = 0, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > SIZE) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            index = i;
            break;
        }
    }

    if (found) {
        printf("Element found at index %d.\n", index);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}
