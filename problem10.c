#include <stdio.h>

/*
Problem 10: Draw Rectangle
Write a program which will input two integer - N and M. The program should "draw" a rectangle of NxM size using "*" and spaces
.*/

int main() {
    int N, M;
    char drawChar = '*';  // Default character is '*'

    // Get user input
    printf("Enter height (N) and width (M): ");
    scanf("%d %d", &N, &M);

    // Check for an optional character input
    getchar(); // Consume newline character left in the buffer
    printf("Enter a character to draw (or press Enter to use '*'): ");
    char temp = getchar();
    if (temp != '\n') {
        drawChar = temp; // Assign user-specified character
    }

    // Draw the rectangle
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            // Print border characters
            if (i == 0 || i == N - 1 || j == 0 || j == M - 1) {
                printf("%c", drawChar);
            } else {
                printf(" ");  // Print spaces inside the rectangle
            }
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}

