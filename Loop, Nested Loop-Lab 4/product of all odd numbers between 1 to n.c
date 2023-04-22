#include <stdio.h>

int main() {
    int n, i;
    long long int product = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        product *= i;
    }

    printf("Multiplication of odd numbers from 1 to %d is %lld", n, product);

    return 0;
}
