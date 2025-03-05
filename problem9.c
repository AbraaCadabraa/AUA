#include <stdio.h>

/*
Problem 9: Check if a number is a power of 2

Input a number and check if it is a power of 2.
*/

// Function to check if a number is a power of 2
int isPowerOfTwo(int num) {
    if (num <= 0) return 0;  // Negative numbers and 0 are not powers of 2

    return (num & (num - 1)) == 0;  // Efficient bitwise check
}

int main() {
    int num;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a power of 2
    if (isPowerOfTwo(num))
        printf("%d is a power of 2.\n", num);
    else
        printf("%d is NOT a power of 2.\n", num);

    return 0;
}

