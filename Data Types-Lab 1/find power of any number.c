#include <stdio.h>
#include <math.h>

int main() {
    double x, y, result;

    printf("Enter the base number: ");
    scanf("%lf", &x);

    printf("Enter the exponent: ");
    scanf("%lf", &y);

    result = pow(x, y);

    printf("%.2lf ^ %.2lf = %.2lf\n", x, y, result);

    return 0;
}
