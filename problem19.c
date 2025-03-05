#include <stdio.h>

/*
Problem 19: Remove a Number

Write a program that asks the user to type 10 integers of an array and an integer value N. Theprogram must search if the value N exists in the array and must remove the first occurrence of N, shifting each following element left and adding a zero at the end of the array. The program must then print the final array.
*/

int main() {
    int arr[10], N, index = -1;

    // Get 10 numbers from the user
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the number to remove
    printf("Enter the number to remove: ");
    scanf("%d", &N);

    // Find the first occurrence of N
    for (int i = 0; i < 10; i++) {
        if (arr[i] == N) {
            index = i;
            break;
        }
    }

    // If the number was found, shift elements left
    if (index != -1) {
        for (int i = index; i < 9; i++) {
            arr[i] = arr[i + 1];  // Shift elements left
        }
        arr[9] = 0;  // Set last element to 0
    } else {
        printf("Number not found in the array!\n");
        return 0;
    }

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

