#include <stdio.h>

/*
Problem 3: Calculate the sum

- The program takes an integer input `N` (1 ≤ N ≤ 1000).
- It calculates the sum of all multiples of 3 or 5 below `N`.
- The result is printed as output.
*/

int main() {
    int N, sum = 0;  // `N` is user input, `sum` stores the result

    // Get user input
    printf("Enter a number (1-1000): ");
    scanf("%d", &N);

    // Validate input range
    if (N < 1 || N > 1000) {
        printf("Invalid input. \n");
        return 1;  // Exit program if input is out of range
    }

    // Loop through numbers from 1 to N-1
    for (int i = 1; i < N; i++) {
        if (i % 3 == 0 || i % 5 == 0) {  // Check if multiple of 3 or 5
            sum += i;  // Add to sum
        }
    }

    // Print the final sum
    printf("The sum of all multiples of 3 or 5 below %d is: %d\n", N, sum);

    return 0;
}

