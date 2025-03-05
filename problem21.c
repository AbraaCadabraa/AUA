#include <stdio.h>

/*
Problem 21: Print the sum of all numbers in the given sequence of N whole numbes
*/

int main() {
    int N, sum = 0;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Validate input
    if (N <= 0) {
        printf("Invalid input! The number of elements must be positive.\n");
        return 1;
    }

    int arr[N];

    // Get N whole numbers from the user
    printf("Enter %d whole numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        // Ensure only whole numbers (0 or positive integers) are entered
        if (arr[i] < 0) {
            printf("Invalid input! Only whole numbers (0 and above) are allowed.\n");
            return 1;
        }

        sum += arr[i];  // Calculate sum
    }

    // Print the total sum
    printf("Sum of the numbers: %d\n", sum);

    return 0;
}

