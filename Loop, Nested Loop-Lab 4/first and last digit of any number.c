#include <stdio.h>

int main() {
    int num, first_digit, last_digit;

    // prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // find the first digit of the number
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // find the last digit of the number
    last_digit = num % 10;

    // print the first and last digit of the number
    printf("The first digit of %d is %d\n", num, first_digit);
    printf("The last digit of %d is %d\n", num, last_digit);

    return 0;
}
