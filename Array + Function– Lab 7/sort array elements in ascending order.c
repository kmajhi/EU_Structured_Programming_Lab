#include <stdio.h>

int main() {
   int arr[100];
   int size, temp;
   
   // Get the size of the array from user
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   
   // Get elements of the array from user
   printf("Enter elements of the array: ");
   for(int i=0; i<size; i++) {
      scanf("%d", &arr[i]);
   }
   
   // Sort the array in ascending order using bubble sort
   for(int i=0; i<size-1; i++) {
      for(int j=0; j<size-i-1; j++) {
         if(arr[j] > arr[j+1]) {
            // Swap adjacent elements if they are in the wrong order
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }
   
   // Print the sorted array
   printf("\nSorted array in ascending order: ");
   for(int i=0; i<size; i++) {
      printf("%d ", arr[i]);
   }
   
   return 0;
}
