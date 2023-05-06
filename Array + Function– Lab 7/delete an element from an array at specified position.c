#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int position;
    
    printf("Enter the position of the element to delete (0-indexed): ");
    scanf("%d", &position);
    
    // Shift elements to the left
    for (int i = position; i < 4; i++) {
        arr[i] = arr[i+1];
    }
    
    // Print the array after deletion
    printf("Array after deletion:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
