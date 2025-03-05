#include <stdio.h>

/*
Problem 20: Input a sequence of N numbers and print it in reverse order.
*/

int main() {
    int N;

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

    // Print the sequence in reverse order
    printf("Reversed sequence: ");
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

