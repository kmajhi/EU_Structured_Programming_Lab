#include <stdio.h>

int main() {
    int n, i, j, is_prime;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            // Check if i is a prime number
            is_prime = 1;
            for (j = 2; j <= i/2; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime) {
                printf("%d ", i);
                n /= i;
                i--;
            }
        }
    }

    printf("\n");
    return 0;
}
