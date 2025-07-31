#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to find string length
void findLength(char str[]) {
    printf("Length of the string: %lu\n", strlen(str));
}

// Function to check if a string is a palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str);
    bool isPalindrome = true;

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");
}

// Function to copy one string to another
void copyString(char source[]) {
    char destination[100];
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
}

// Function to compare two strings
void compareStrings(char str1[]) {
    char str2[100];
    printf("Enter another string to compare: ");
    scanf(" %[^\n]", str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");
}

// Main function with menu
int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do {
        printf("\n--- String Master ---\n");
        printf("1. Find string length\n");
        printf("2. Check palindrome\n");
        printf("3. Copy string\n");
        printf("4. Compare strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: findLength(str); break;
            case 2: checkPalindrome(str); break;
            case 3: copyString(str); break;
            case 4: compareStrings(str); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while(choice != 5);

    return 0;
}
