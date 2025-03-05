#include <stdio.h>
#include <ctype.h>  // For toupper() and tolower()

/*
Problem 26: Convert a String to Uppercase or Lowercase
 Input a word/string (sequence of symbols) and make all of the letters capital/small
*/

int main() {
    char str[1000];  // Buffer for the input string
    int choice;

    // Get the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Get the choice from the user
    printf("Choose conversion:\n");
    printf("1 - Uppercase\n");
    printf("2 - Lowercase\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    // Process string based on the choice
    for (int i = 0; str[i] != '\0'; i++) {
        if (choice == 1) {
            str[i] = toupper(str[i]);  // Convert to uppercase
        } else if (choice == 2) {
            str[i] = tolower(str[i]);  // Convert to lowercase
        }
    }

    // Validate choice
    if (choice != 1 && choice != 2) {
        printf("Invalid choice! Please enter 1 for Uppercase or 2 for Lowercase.\n");
        return 1;
    }

    // Print the converted string
    printf("Converted string: %s", str);

    return 0;
}

