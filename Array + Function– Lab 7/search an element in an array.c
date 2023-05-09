#include <stdio.h>

int main() {
   int arr[100];
   int size, element, index=-1;
   
   // Get the size of the array from user
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   
   // Get elements of the array from user
   printf("Enter elements of the array: ");
   for(int i=0; i<size; i++) {
      scanf("%d", &arr[i]);
   }
   
   // Get the element to search from user
   printf("\nEnter the element to search: ");
   scanf("%d", &element);
   
   // Search for the element
   for(int i=0; i<size; i++) {
      if(arr[i] == element) {
         index = i;
         break;
      }
   }
   
   // Print the result
   if(index == -1) {
      printf("\nElement not found");
   } else {
      printf("\nElement found at index %d", index);
   }
   
   return 0;
}
