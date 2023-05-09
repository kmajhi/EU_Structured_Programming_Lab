#include <stdio.h>

int main() {
   int arr[100], revArr[100];
   int size;
   
   // Get the size of the array from user
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   
   // Get elements of the array from user
   printf("Enter elements of the array: ");
   for(int i=0; i<size; i++) {
      scanf("%d", &arr[i]);
   }
   
   // Reverse the array
   for(int i=0; i<size; i++) {
      revArr[size-i-1] = arr[i];
   }
   
   // Print the reversed array
   printf("\nReversed array: ");
   for(int i=0; i<size; i++) {
      printf("%d ", revArr[i]);
   }
   
   return 0;
}
