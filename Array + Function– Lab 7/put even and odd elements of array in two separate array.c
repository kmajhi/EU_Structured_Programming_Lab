#include <stdio.h>

int main() {
   int arr[100], evenArr[100], oddArr[100];
   int size, evenSize=0, oddSize=0;
   
   // Get the size of the array from user
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   
   // Get elements of the array from user
   printf("Enter elements of the array: ");
   for(int i=0; i<size; i++) {
      scanf("%d", &arr[i]);
   }
   
   // Put even and odd elements in separate arrays
   for(int i=0; i<size; i++) {
      if(arr[i] % 2 == 0) {
         evenArr[evenSize] = arr[i];
         evenSize++;
      } else {
         oddArr[oddSize] = arr[i];
         oddSize++;
      }
   }
   
   // Print the even elements array
   printf("\nEven elements array: ");
   for(int i=0; i<evenSize; i++) {
      printf("%d ", evenArr[i]);
   }
   
   // Print the odd elements array
   printf("\nOdd elements array: ");
   for(int i=0; i<oddSize; i++) {
      printf("%d ", oddArr[i]);
   }
   
   return 0;
}
