#include <stdio.h>
#include <string.h>

/*
Problem 18: Binary to Decimal

Write a program to input a binary number (a sequence of 0-1s) and convert it to decimal. Print the results.
*/

// Function to convert binary string to decimal using bitwise shifts
int binaryToDecimal(char binary[]) {
    int decimal = 0;
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '1') {
            decimal = (decimal << 1) | 1;  // Shift left and add 1
        } else if (binary[i] == '0') {
            decimal = (decimal << 1);  // Shift left (adds a zero)
        } else {
            printf("Invalid binary number!\n");
            return -1; // Return error code for invalid input
        }
    }
    return decimal;
}

int main() {
    char binary[32];  // Assuming max 32-bit input

    // Get binary number as input
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Convert to decimal and print result
    int decimal = binaryToDecimal(binary);
    if (decimal != -1) {
        printf("Decimal representation: %d\n", decimal);
    }

    return 0;
}

