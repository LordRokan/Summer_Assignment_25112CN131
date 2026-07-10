#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to count vowels and consonants
void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, special = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if (isalpha(ch)) {
            if (isVowel(ch)) {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        } else {
            special++;
        }
    }
    
    printf("\n========== CHARACTER COUNT ==========\n");
    printf("Vowels:        %d\n", vowels);
    printf("Consonants:    %d\n", consonants);
    printf("Digits:        %d\n", digits);
    printf("Spaces:        %d\n", spaces);
    printf("Special Chars: %d\n", special);
    printf("Total Letters: %d\n", vowels + consonants);
    printf("=====================================\n\n");
}

// Alternative function - case-sensitive vowel counting
void countVowelsConsonantsDetailed(char str[]) {
    int lowerVowels = 0, upperVowels = 0, consonants = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                lowerVowels++;
            } else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                upperVowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("\n===== DETAILED CHARACTER COUNT =====\n");
    printf("Lowercase Vowels: %d\n", lowerVowels);
    printf("Uppercase Vowels: %d\n", upperVowels);
    printf("Total Vowels:     %d\n", lowerVowels + upperVowels);
    printf("Consonants:       %d\n", consonants);
    printf("=====================================\n\n");
}

int main() {
    printf("========== VOWEL & CONSONANT COUNTER ==========\n\n");
    
    // Test with predefined strings
    char test1[] = "Hello World";
    char test2[] = "C Programming 2024";
    char test3[] = "AEIOUaeiou";
    
    printf("Test 1: \"%s\"\n", test1);
    countVowelsConsonants(test1);
    
    printf("Test 2: \"%s\"\n", test2);
    countVowelsConsonants(test2);
    
    printf("Test 3: \"%s\"\n", test3);
    countVowelsConsonantsDetailed(test3);
    
    // User input
    char userInput[200];
    printf("Enter a string: ");
    fgets(userInput, sizeof(userInput), stdin);
    
    // Remove newline if present
    if (userInput[strlen(userInput) - 1] == '\n') {
        userInput[strlen(userInput) - 1] = '\0';
    }
    
    printf("\nYour Input: \"%s\"\n", userInput);
    countVowelsConsonants(userInput);
    
    return 0;
}
