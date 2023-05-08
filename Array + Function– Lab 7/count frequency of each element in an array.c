#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Taking input from user
    printf("Enter %d elements in the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initiallize frequency array with -1
    }

    // Counting frequency of each element in array
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // If element is counted, set frequency as 0
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Displaying frequency of each element
    printf("\nFrequency of each element in the array: \n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
