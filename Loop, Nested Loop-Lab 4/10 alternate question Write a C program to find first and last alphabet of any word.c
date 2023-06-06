#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    char firstAlphabet, lastAlphabet;

    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);
    
    // Finding the first alphabet
    for (int i = 0; i < length; i++) {
        if (isalpha(word[i])) {
            firstAlphabet = tolower(word[i]);
            break;
        }
    }

    // Finding the last alphabet
    for (int i = length - 1; i >= 0; i--) {
        if (isalpha(word[i])) {
            lastAlphabet = tolower(word[i]);
            break;
        }
    }

    printf("First alphabet: %c\n", firstAlphabet);
    printf("Last alphabet: %c\n", lastAlphabet);

    return 0;
}
