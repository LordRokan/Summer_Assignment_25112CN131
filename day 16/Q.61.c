#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    int sum = 0;

    printf("Enter %d elements (from 1 to %d with one missing): \n", n, n + 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int expected_sum = (n + 1) * (n + 2) / 2;
    int missing = expected_sum - sum;

    printf("Missing number is: %d\n", missing);
    return 0;
}
