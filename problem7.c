#include <stdio.h>

/*
Problem 7: Palindrome Numbers
Input a number and check if it is a palindrome number. Print the answer.
*/

int main() {
    int num, originalNum, reversed = 0, digit;

    // Get user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number

    // Reverse the number
    while (num > 0) {
        digit = num % 10;  // Get last digit
        reversed = reversed * 10 + digit;  // Shift digits and add new one
        num /= 10;  // Remove last digit
    }

    // Check if original number matches reversed number
    if (originalNum == reversed)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is NOT a palindrome.\n", originalNum);

    return 0;
}

