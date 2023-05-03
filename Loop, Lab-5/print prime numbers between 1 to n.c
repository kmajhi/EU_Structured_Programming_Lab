#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 to %d are: ", n);

    // Loop through all numbers from 2 to n
    for (i = 2; i <= n; i++) {
        // Assume the number is prime
        isPrime = 1;

        // Check whether the number is divisible by any number from 2 to i-1
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                // If the number is divisible, it is not prime
                isPrime = 0;
                break;
            }
        }

        // If the number is prime, print it
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
