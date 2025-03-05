#include <stdio.h>

/*
Problem 23: . Input a sequence of N numbers and sort the sequence in ascending/descending order.
*/

void sortArray(int arr[], int N, int order) {
    // Simple Bubble Sort algorithm
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if ((order == 1 && arr[j] > arr[j + 1]) ||  // Ascending
                (order == 2 && arr[j] < arr[j + 1])) {  // Descending
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N, order;

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

    // Ask user for sorting order
    printf("Choose sorting order (1 for Ascending, 2 for Descending): ");
    scanf("%d", &order);

    // Validate sorting choice
    if (order != 1 && order != 2) {
        printf("Invalid sorting choice! Enter 1 for Ascending or 2 for Descending.\n");
        return 1;
    }

    // Sort the array
    sortArray(arr, N, order);

    // Print the sorted array
    printf("Sorted sequence: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

