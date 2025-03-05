#include <stdio.h>

/*
Problem 25: Insert a Number in a Sequence

Insert the number K into sequence of N numbers in the beginning/end. Do the same but insert the element into M-th place.

*/

int main() {
    int N, K, choice, M;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Validate input
    if (N <= 0) {
        printf("Invalid input! The number of elements must be positive.\n");
        return 1;
    }

    int arr[N + 1];  // Allocate space for one extra element

    // Get N numbers from the user
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the number to insert
    printf("Enter the number to insert: ");
    scanf("%d", &K);

    // Get insertion choice
    printf("Choose insertion position:\n");
    printf("1 - Beginning\n");
    printf("2 - End\n");
    printf("3 - M-th Position\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    // Handle insertion based on choice
    if (choice == 1) {
        // Insert at the beginning
        for (int i = N; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = K;
        N++;  // Increase array size

    } else if (choice == 2) {
        // Insert at the end
        arr[N] = K;
        N++;  // Increase array size

    } else if (choice == 3) {
        // Insert at M-th position
        printf("Enter the position (1-based index): ");
        scanf("%d", &M);

        // Validate M (must be in range 1 to N+1)
        if (M < 1 || M > N + 1) {
            printf("Invalid position! Choose a value between 1 and %d.\n", N + 1);
            return 1;
        }

        // Shift elements right to create space
        for (int i = N; i >= M; i--) {
            arr[i] = arr[i - 1];
        }
        arr[M - 1] = K;
        N++;  // Increase array size

    } else {
        printf("Invalid choice! Please select 1, 2, or 3.\n");
        return 1;
    }

    // Print the updated sequence
    printf("Updated sequence: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

