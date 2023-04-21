#include <stdio.h>

int main() {
    char c = 'a';
    
    printf("Alphabets from a to z are: ");
    
    while (c <= 'z') {
        printf("%c ", c);
        c++;
    }
    
    return 0;
}
