#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}

int main() {
    int n, i, num, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 to %d are: ", n);

    // Loop through all numbers from 1 to n
    for (i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        // Calculate sum of factorials of digits
        while (num != 0) {
            digit = num % 10;
            sum += factorial(digit);
            num /= 10;
        }

        // If sum is equal to the number, it is a Strong number
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
