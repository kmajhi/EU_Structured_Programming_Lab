#include <stdio.h>

int main()
{
    int arr[100], n, i, j, k;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n;) {
            if (arr[j] == arr[i]) {
                // Shift all elements to the left
                for (k = j; k < n; k++) {
                    arr[k] = arr[k+1];
                }
                n--;  // Decrease size of array
            } else {
                j++;  // Move to next element
            }
        }
    }

    // Print the result
    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
