#include <stdio.h>

int main() {
    int n, first_digit, last_digit, sum;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Get the first digit of the number
    first_digit = n;
    while (first_digit >= 10) {
        first_digit /= 10;
    }
    
    // Get the last digit of the number
    last_digit = n % 10;
    
    // Compute the sum of the first and last digits
    sum = first_digit + last_digit;
    
    printf("The sum of the first and last digits of %d is %d\n", n, sum);
    
    return 0;
}
