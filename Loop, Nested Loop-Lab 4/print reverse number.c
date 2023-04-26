#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *numStr = NULL;
    size_t numStrLen = 0;
    ssize_t len;

    printf("Enter an integer: ");
    len = getline(&numStr, &numStrLen, stdin);

    // Remove the newline character if it exists
    if (len > 0 && numStr[len - 1] == '\n') {
        numStr[len - 1] = '\0';
        len--;
    }

    // Reversing the number
    for (int i = 0; i < len / 2; i++) {
        char temp = numStr[i];
        numStr[i] = numStr[len - i - 1];
        numStr[len - i - 1] = temp;
    }

    printf("The reverse of the number is: %s\n", numStr);

    // Free the dynamically allocated memory
    free(numStr);

    return 0;
}
