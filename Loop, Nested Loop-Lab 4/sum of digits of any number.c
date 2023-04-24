#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int temp = num; temp != 0; temp /= 10) {
        sum += temp % 10;
    }

    printf("The sum of digits in the given number is: %d", sum);
    return 0;
}
