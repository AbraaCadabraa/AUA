#include <stdio.h>
#include <stdint.h>

/*
Problem 17: Decimal to Binary

Write a program to input a number and convert it to binary (e.g in 4 bits). Enhance the program to support also negative numbers (calculate 2's complement)
*/

// Function to convert decimal to binary (4-bit)
void printBinary(int num) {
    int bits = 4;  // 4-bit representation
    int mask = 1 << (bits - 1); // Start from the leftmost bit

    for (int i = 0; i < bits; i++) {
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }
        mask >>= 1; // Shift mask to the right
    }
    printf("\n");
}

int main() {
    int num;

    // Get user input
    printf("Enter a number (-8 to 7 for 4-bit representation): ");
    scanf("%d", &num);

    // Ensure input is within range for 4-bit signed representation
    if (num < -8 || num > 7) {
        printf("Number out of range for 4-bit representation!\n");
        return 1;
    }

    // Print binary representation
    printf("Binary representation: ");
    printBinary(num);

    return 0;
}

