#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 to %d are: ", n);

    // Loop through all numbers from 1 to n
    for (i = 1; i <= n; i++) {
        sum = 0;

        // Find all divisors of i and add them to sum
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        // If sum is equal to i, it is a perfect number
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
