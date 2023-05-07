#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int n, count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize frequency array with -1
    }

    // Count duplicates
    for (int i = 0; i < n; i++) {
        int duplicate = 0;
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicate++;
                freq[j] = 0;  // Mark as duplicate
            }
        }
        if (freq[i] != 0) {
            freq[i] = duplicate;
        }
    }

    // Print the result
    printf("The total number of duplicate elements in the array is: ");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            count += freq[i];
        }
    }
    printf("%d\n", count);

    return 0;
}
