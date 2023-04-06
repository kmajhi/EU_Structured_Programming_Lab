#include <stdio.h>

int main() {
    float num1, num2;
    
    
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);
   
    
    printf("\nArithmetic operations on %.2f and %.2f:\n", num1, num2);
    
    
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("%.2f *%.2f = %.2f\n", num1, num2, num1 * num2);
    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    printf("%.0f %% %.0f = %d\n", num1, num2, (int) num1 % (int) num2);
    
    return 0;
}
