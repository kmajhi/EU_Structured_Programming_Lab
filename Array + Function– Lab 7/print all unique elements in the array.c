#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 2, 4, 5, 3, 6, 7, 6};
    int unique[10];
    int size = 0, flag;
    
    for (int i = 0; i < 10; i++) {
        flag = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == unique[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            unique[size] = arr[i];
            size++;
        }
    }
    
    printf("Unique elements in the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", unique[i]);
    }
    
    return 0;
}
