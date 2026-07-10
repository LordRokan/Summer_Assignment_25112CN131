#include <stdio.h>

// Function to find string length without strlen()
int stringLength(char str[]) {
    int length = 0;
    
    // Iterate until null terminator is found
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str1[] = "Hello World";
    char str2[] = "C Programming";
    char str3[] = "";
    
    printf("String: \"%s\" -> Length: %d\n", str1, stringLength(str1));
    printf("String: \"%s\" -> Length: %d\n", str2, stringLength(str2));
    printf("String: \"%s\" -> Length: %d\n", str3, stringLength(str3));
    
    // Taking input from user
    char userInput[100];
    printf("\nEnter a string: ");
    scanf("%99s", userInput);
    printf("Length of \"%s\": %d\n", userInput, stringLength(userInput));
    
    return 0;
}
