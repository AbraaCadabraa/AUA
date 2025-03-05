#include <stdio.h>

/*
Problem 22:  Input a sequence of N whole numbers and print Yes if the numbers in the sequence are sorted in ascending/descending order.

*/

int main() {
    int N, isAscending = 1, isDescending = 1;

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
    }

    // Check if the sequence is sorted in ascending or descending order
    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[i - 1]) {
            isAscending = 0;
        }
        if (arr[i] > arr[i - 1]) {
            isDescending = 0;
        }
    }

    // Print the result
    if (isAscending || isDescending) {
        printf("Yes, either in ascending or descending order\n");
    } else {
        printf("No, not in ascending/descending order.\n");
    }

    return 0;
}

