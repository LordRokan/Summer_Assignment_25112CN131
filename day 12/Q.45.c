#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *text) {
    int left = 0;
    int right = strlen(text) - 1;

    while (left < right) {
        if (!isalnum((unsigned char)text[left])) {
            left++;
            continue;
        }
        if (!isalnum((unsigned char)text[right])) {
            right--;
            continue;
        }
        if (tolower((unsigned char)text[left]) != tolower((unsigned char)text[right])) {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}

int main(void) {
    char input[256];

    printf("Enter a string: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1;
    }

    // Remove trailing newline if present
    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input)) {
        printf("\"%s\" is a palindrome.\n", input);
    } else {
        printf("\"%s\" is not a palindrome.\n", input);
    }

    return 0;
}
