#include <stdio.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        int temp = remainder;
        for (int i = 1; i < n; ++i) {
            remainder *= temp;
        }
        result += remainder;
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }

    return 0;
}
