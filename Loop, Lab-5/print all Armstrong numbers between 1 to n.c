#include <stdio.h>

int main() {
    int n, i, num, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 to %d are: ", n);

    // Loop through all numbers from 1 to n
    for (i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        // Calculate sum of cubes of digits
        while (num != 0) {
            digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }

        // If sum is equal to the number, it is an Armstrong number
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
