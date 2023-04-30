#include <stdio.h>

int main() {
    double base, exponent, result = 1;
    int i;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent number: ");
    scanf("%lf", &exponent);

    for (i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%.2lf^%.2lf = %.2lf", base, exponent, result);

    return 0;
}
