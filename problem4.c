#include <stdio.h>

/*
Problem 4: Calculate sum of digits
Write a program which will input an integer number and will print the sum of thedigits of the number
*/

int main() {
    int num, sum = 0, digit;  // Variables for number, sum, and each digit

    // Get user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is 0
    if (num = 0){
	    printf("Error: The number should not start with 0.\n");

    }
    // Convert negative numbers to positive
    if (num < 0) {
        num = -num;
    }

    // Extract digits and sum them up
    while (num > 0) {
        digit = num % 10;  // Get the last digit
        sum += digit;  // Add digit to sum
        num /= 10;  // Remove last digit
    }

    // Print the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
