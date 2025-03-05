#include <stdio.h>

/*
Problem 24: Delete the M-th Element from a Sequence..
Delete the M-th element in the sequence of N numbers (e.g. delete the 3rd element from the [1,4,5,6,3] sequence and end up with [1,4,6,3] sequence).
*/

int main() {
    int N, M;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Validate input
    if (N <= 0) {
        printf("Invalid input! The number of elements must be positive.\n");
        return 1;
    }

    int arr[N];

    // Get N numbers from the user
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the position to delete (1-based index)
    printf("Enter the position to delete (1-based index): ");
    scanf("%d", &M);

    // Validate M (must be in range 1 to N)
    if (M < 1 || M > N) {
        printf("Invalid position! Choose a value between 1 and %d.\n", N);
        return 1;
    }

    // Shift elements left to remove the M-th element
    for (int i = M - 1; i < N - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the updated sequence (excluding last element)
    printf("Updated sequence: ");
    for (int i = 0; i < N - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

