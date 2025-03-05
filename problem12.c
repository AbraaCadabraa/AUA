#include <stdio.h>

/*
Problem 12: Draw an Isosceles Triangle

Write a program which will input an integer number - N, and "draw" isosceles triangle with base N.
*/

int main() {
    int N;

    // Get user input
    printf("Enter the height of the triangle (N): ");
    scanf("%d", &N);

    // Draw the isosceles triangle
    printf("\nIsosceles Triangle:\n");
    for (int i = 1; i <= N; i++) {
        // Print spaces for centering
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

