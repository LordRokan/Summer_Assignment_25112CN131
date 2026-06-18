#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int n) {
    int sum = 0;
    int temp = n;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    
    return (sum == n);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isStrongNumber(num)) {
        printf("%d is a strong number\n", num);
    } else {
        printf("%d is not a strong number\n", num);
    }
    
    return 0;
}
