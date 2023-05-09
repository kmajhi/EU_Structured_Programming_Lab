#include <stdio.h>

int main() {
   int arr1[100], arr2[100], mergedArr[200];
   int size1, size2, mergedSize;
   
   // Get the size of first array from user
   printf("Enter the size of first array: ");
   scanf("%d", &size1);
   
   // Get elements of first array from user
   printf("Enter elements of first array: ");
   for(int i=0; i<size1; i++) {
      scanf("%d", &arr1[i]);
   }
   
   // Get the size of second array from user
   printf("Enter the size of second array: ");
   scanf("%d", &size2);
   
   // Get elements of second array from user
   printf("Enter elements of second array: ");
   for(int i=0; i<size2; i++) {
      scanf("%d", &arr2[i]);
   }
   
   // Merge the two arrays
   mergedSize = size1 + size2;
   for(int i=0; i<size1; i++) {
      mergedArr[i] = arr1[i];
   }
   for(int i=0; i<size2; i++) {
      mergedArr[size1 + i] = arr2[i];
   }
   
   // Print the merged array
   printf("\nMerged array: ");
   for(int i=0; i<mergedSize; i++) {
      printf("%d ", mergedArr[i]);
   }
   
   return 0;
}
