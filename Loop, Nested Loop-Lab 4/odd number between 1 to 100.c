#include <stdio.h>

int main() {
    int i = 1;
    
    printf("Odd numbers between 1 to 100 are: ");
    
    while (i <= 100) {
        printf("%d ", i);
        i += 2;
    }
    
    return 0;
}
