#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int element, position;
    
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    printf("Enter the position to insert the element (0-indexed): ");
    scanf("%d", &position);
    
    // Shift elements to the right
    for (int i = 4; i >= position; i--) {
        arr[i+1] = arr[i];
    }
    
    // Insert the element
    arr[position] = element;
    
    // Print the array after insertion
    printf("Array after insertion:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
