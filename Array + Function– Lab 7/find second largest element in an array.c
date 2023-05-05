#include <stdio.h>

int main() {
    int n, i;
    int largest = -2147483648;  // Assume the largest element is negative infinity
    int secondLargest = -2147483648;  // Assume the second largest element is negative infinity

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Update largest and secondLargest if necessary
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -2147483648) {
        printf("There is no second largest element in the array.\n");
    }
    else {
        printf("The second largest element in the array is %d.\n", secondLargest);
    }

    return 0;
}
