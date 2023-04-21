#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter a positive integer number: ");
    scanf("%d", &n);
    
    printf("Natural numbers from %d to 1 are: ", n);
    
    i = n;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    
    return 0;
}
