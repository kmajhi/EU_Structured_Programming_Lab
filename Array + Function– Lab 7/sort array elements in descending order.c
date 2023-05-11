#include <stdio.h>

void selection_sort_descending(int arr[], int n) {
    int i, j, max_index, temp;
    for (i = 0; i < n-1; i++) {
        max_index = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selection_sort_descending(arr, n);

    printf("\nSorted array in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
