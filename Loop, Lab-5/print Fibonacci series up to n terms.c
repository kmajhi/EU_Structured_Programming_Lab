#include <stdio.h>

int main() {
    int n, i;
    int fib1 = 0, fib2 = 1, fib3;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    // Print the first two terms of the series
    printf("%d %d ", fib1, fib2);

    // Loop through the remaining terms and print them
    for (i = 3; i <= n; i++) {
        fib3 = fib1 + fib2;
        printf("%d ", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");

    return 0;
}
