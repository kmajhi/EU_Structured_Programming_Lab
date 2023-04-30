#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.");
        return 0;
    }

    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %llu", num, factorial);

    return 0;
}
