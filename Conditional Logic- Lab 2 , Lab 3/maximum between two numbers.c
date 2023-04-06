#include <stdio.h>

int main() {
   int num1, num2;

   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);

   //if entered number 1 is greater than number 2, then it will print the number 1. 
   if (num1 > num2) {
      printf("%d is the maximum number\n", num1);
   }
   else {
      printf("%d is the maximum number\n", num2);
   }

   return 0;
}
