#include <stdio.h>

/*
Problem 11: Draw Triangle

Write a program which will input an integer number - N, and "draw" two types of right-angle triangle of height N.
*/

int main() {
    int N;

    // Get user input
    printf("Enter the height of the triangle (N): ");
    scanf("%d", &N);

    // Left-aligned right-angled triangle
    printf("\nLeft-aligned Triangle:\n");
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Right-aligned right-angled triangle
    printf("\nRight-aligned Triangle:\n");
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

