#include <stdio.h>

int main() {
    int n, i;
    int countEven = 0, countOdd = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Increment countEven or countOdd depending on the parity of the element
        if (arr[i] % 2 == 0) {
            countEven++;
        }
        else {
            countOdd++;
        }
    }

    printf("Total number of even elements: %d\n", countEven);
    printf("Total number of odd elements: %d\n", countOdd);

    return 0;
}
