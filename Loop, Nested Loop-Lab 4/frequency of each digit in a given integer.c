#include <stdio.h>

int main() {
    int num, digit, freq[10] = {0};
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    
    printf("Frequency of each digit in the given integer:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d : %d\n", i, freq[i]);
    }
    
    return 0;
}
