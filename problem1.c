#include <stdio.h>

/*Write a program which will allow user to input a valid arithmetic expression (number, operation, number, and will print out the result)
Problem 1: Arithmetic Operations

Problem 1.1: Enhance the program to print the result of division as a floationg point number. 
Problem 1.2: Enhance the program to use "switch" operator instead of if/else
*/

int main() {
    int a, b;  // Variables for numbers
    char op;   // Operator variable

    // Geting user input
    printf("Enter an arithmetic expression): ");
    scanf("%d %c %d", &a, &op, &b);

    // Using switch to handle operations (Problem 1.2)
    switch (op) {
        case '+':  // Addition
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':  // Subtraction
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':  // Multiplication
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':  // Division (Problem 1.1 )
            if (b != 0)
                printf("%d / %d = %.3f\n", a, b, (float)a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:  // Invalid operator
            printf("Please use +, -, *, or /.\n");
    }

    return 0;
}

