#include <stdio.h>

/*
Problem 6: Prime Numbers

- Part 1: Check if a given number is prime.
- Part 2 (6.1): Print all prime numbers in the range [1, N].
*/

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;  // Numbers less than 2 are not prime

    for (int i = 2; i * i <= num; i++) {  // Check divisibility up to sqrt(num)
        if (num % i == 0) return 0;  // If divisible, it's not prime
    }

    return 1;  // If no divisors found, it's prime
}

int main() {
    int choice, num;

    // User chooses mode: single number check or range check
    printf("Choose an option:\n");
    printf("1 - Check if a number is prime\n");
    printf("2 - Print all prime numbers from 1 to N\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {  
        // Part 1: Check if a single number is prime
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isPrime(num))
            printf("%d is a prime number.\n", num);
        else
            printf("%d is NOT a prime number.\n", num);

    } else if (choice == 2) {  
        // Part 2 (6.1): Print all primes from 1 to N
        printf("Enter a number N: ");
        scanf("%d", &num);

        printf("Prime numbers from 1 to %d: ", num);
        for (int i = 1; i <= num; i++) {
            if (isPrime(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    } else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}

