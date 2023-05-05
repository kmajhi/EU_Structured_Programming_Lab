#include <stdio.h>

int main() {
    int n, i, j, isPrime;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop through all numbers from 2 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1;  // Assume i is prime until proven otherwise

        // Check if i is prime
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0;  // i is not prime
                break;
            }
        }

        // If i is prime, add it to the sum
        if (isPrime == 1) {
            sum += i;
        }
    }

    printf("The sum of all prime numbers between 1 and %d is %d\n", n, sum);

    return 0;
}
