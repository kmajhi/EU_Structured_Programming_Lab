#include <stdio.h>

int main() {
   int num1, num2;
   
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

   printf("Sum of %d and %d is: %d \n", num1, num2, num1 + num2);
   return 0;
}
