#include <stdio.h>

/*
Problem 2: Grades to Letters
- The program allows the user to enter a numerical grade (0-100).
- It converts the grade into a letter grade based on grading scale.

Problem 2.1: Enhance the program to work in "interactive mode"
- The program should continue running until the user enters -1.
*/

int main() {
    int grade;  // Variable to store the user's grade

       while (1) { //For continuous running of the program
        // Ask for user input
        printf("Enter your grade (0-100) or -1 to quit: ");
        scanf("%d", &grade);

        // Check for exit condition (user enters -1)
        if (grade == -1) {
            printf("Exiting program.\n");
            break;  // Exit the loop
        }

        // Validate input range (grade should be between 0 and 100)
        if (grade < 0 || grade > 100) {
            printf("Invalid input.\n");
            continue;  // Restart loop for valid input
        }

        /*
        Convert numeric grade to letter grade.
        */
        if (grade >= 90) {
            printf("Your grade is A\n");
        } else if (grade >= 80) {
            printf("Your grade is B\n");
        } else if (grade >= 70) {
            printf("Your grade is C\n");
        } else if (grade >= 60) {
            printf("Your grade is D\n");
        } else {
            printf("Your grade is F\n");
        }
    }

    return 0;
}

