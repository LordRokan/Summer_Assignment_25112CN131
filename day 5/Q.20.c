#include <stdio.h>

int largestPrimeFactor(int n) {
    int largestFactor = -1;
    
    // Divide by 2 while even
    while (n % 2 == 0) {
        largestFactor = 2;
        n = n / 2;
    }
    
    // Check odd factors from 3 onwards
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n = n / i;
        }
    }
    
    // If n is still greater than 1, then it's a prime factor
    if (n > 1) {
        largestFactor = n;
    }
    
    return largestFactor;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("Invalid input! Please enter a number greater than 1\n");
    } else {
        printf("Largest prime factor of %d is: %d\n", num, largestPrimeFactor(num));
    }
    
    return 0;
}
