#include <stdio.h>

int main() {
    int i = 2;
    
    printf("Even numbers between 1 to 100 are: ");
    
    while (i <= 100) {
        printf("%d ", i);
        i += 2;
    }
    
    return 0;
}
