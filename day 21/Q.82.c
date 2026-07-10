#include <stdio.h>

// Method 1: Using a temporary array
void reverseStringMethod1(char str[], char reversed[]) {
    int length = 0;
    
    // Find string length
    while (str[length] != '\0') {
        length++;
    }
    
    // Copy in reverse order
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';
}

// Method 2: Using recursion
void reverseStringMethod2(char str[], int start, int end) {
    if (start >= end)
        return;
    
    // Swap characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursive call
    reverseStringMethod2(str, start + 1, end - 1);
}

// Helper function to find string length
int getLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Method 3: Using two pointers (in-place reversal)
void reverseStringMethod3(char str[]) {
    int length = getLength(str);
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        // Swap characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    printf("========== STRING REVERSAL PROGRAM ==========\n\n");
    
    // Method 1: Using temporary array
    printf("Method 1: Using temporary array\n");
    char str1[] = "Hello World";
    char reversed1[50];
    reverseStringMethod1(str1, reversed1);
    printf("Original: %s\n", str1);
    printf("Reversed: %s\n\n", reversed1);
    
    // Method 2: Using recursion
    printf("Method 2: Using recursion\n");
    char str2[] = "C Programming";
    int len2 = getLength(str2);
    printf("Original: %s\n", str2);
    reverseStringMethod2(str2, 0, len2 - 1);
    printf("Reversed: %s\n\n", str2);
    
    // Method 3: Two pointers (in-place)
    printf("Method 3: Using two pointers (in-place)\n");
    char str3[] = "Reverse Me";
    printf("Original: %s\n", str3);
    reverseStringMethod3(str3);
    printf("Reversed: %s\n\n", str3);
    
    // User input
    printf("Enter a string to reverse: ");
    char userStr[100];
    scanf("%99s", userStr);
    
    reverseStringMethod3(userStr);
    printf("Reversed string: %s\n", userStr);
    
    return 0;
}
