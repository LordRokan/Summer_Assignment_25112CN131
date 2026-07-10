#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Method 1: Convert using ASCII values (manual)
void convertToUppercaseManual(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // If character is lowercase, convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // ASCII difference between 'a' and 'A' is 32
        }
    }
}

// Method 2: Using toupper() function
void convertToUppercaseBuiltin(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

// Method 3: Convert to a new string without modifying original
void convertToUppercaseCopy(char original[], char converted[]) {
    for (int i = 0; original[i] != '\0'; i++) {
        if (original[i] >= 'a' && original[i] <= 'z') {
            converted[i] = original[i] - 32;
        } else {
            converted[i] = original[i];
        }
    }
    converted[strlen(original)] = '\0';
}

// Method 4: Convert to uppercase with character-by-character output
void convertAndDisplay(char str[]) {
    printf("Converted: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", toupper(str[i]));
    }
    printf("\n");
}

int main() {
    printf("========== LOWERCASE TO UPPERCASE CONVERTER ==========\n\n");
    
    // Method 1: Manual ASCII conversion (in-place)
    printf("Method 1: Manual ASCII conversion (in-place)\n");
    char str1[] = "hello world";
    printf("Original: %s\n", str1);
    convertToUppercaseManual(str1);
    printf("Converted: %s\n\n", str1);
    
    // Method 2: Using toupper() function (in-place)
    printf("Method 2: Using toupper() function (in-place)\n");
    char str2[] = "c programming";
    printf("Original: %s\n", str2);
    convertToUppercaseBuiltin(str2);
    printf("Converted: %s\n\n", str2);
    
    // Method 3: Copy to new string (original unchanged)
    printf("Method 3: Copy to new string (original unchanged)\n");
    char str3[] = "preserve original";
    char converted[50];
    printf("Original: %s\n", str3);
    convertToUppercaseCopy(str3, converted);
    printf("Converted: %s\n");
    printf("Original after: %s\n\n", converted, str3);
    
    // Method 4: Display converted without storing
    printf("Method 4: Display converted without storing\n");
    char str4[] = "just display";
    printf("Original: %s\n", str4);
    convertAndDisplay(str4);
    printf("\n");
    
    // User input
    char userInput[100];
    printf("Enter a string to convert to uppercase: ");
    fgets(userInput, sizeof(userInput), stdin);
    
    // Remove newline if present
    if (userInput[strlen(userInput) - 1] == '\n') {
        userInput[strlen(userInput) - 1] = '\0';
    }
    
    printf("Original: %s\n", userInput);
    convertToUppercaseBuiltin(userInput);
    printf("Converted: %s\n", userInput);
    
    return 0;
}
