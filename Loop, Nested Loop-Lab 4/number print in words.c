#include <stdio.h>

void print_digit(int digit);
void print_tens(int number);
void print_number(int number);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    print_number(number);
    return 0;
}

void print_digit(int digit) {
    switch (digit) {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
    }
}

void print_tens(int number) {
    if (number >= 10 && number <= 19) {
        switch (number) {
            case 10:
                printf("ten");
                break;
            case 11:
                printf("eleven");
                break;
            case 12:
                printf("twelve");
                break;
            case 13:
                printf("thirteen");
                break;
            case 14:
                printf("fourteen");
                break;
            case 15:
                printf("fifteen");
                break;
            case 16:
                printf("sixteen");
                break;
            case 17:
                printf("seventeen");
                break;
            case 18:
                printf("eighteen");
                break;
            case 19:
                printf("nineteen");
                break;
        }
    } else {
        switch (number / 10) {
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("forty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eighty");
                break;
            case 9:
                printf("ninety");
                break;
        }
        if (number % 10 != 0) {
            printf("-");
            print_digit(number % 10);
        }
    }
}

void print_number(int number) {
    if (number < 0) {
        printf("minus ");
        number = -number;
    }
    if (number == 0) {
        printf("zero");
        return;
    }
    if (number >= 1000000) {
        print_number(number / 1000000);
        printf(" million ");
        number %= 1000000;
    }
    if (number >= 1000) {
        print_number(number / 1000);
        printf(" thousand ");
        number %= 1000;
    }
    if (number >= 100) {
        print_digit(number / 100);
        printf(" hundred ");
        number %= 100;
    }
    print_tens(number);
}
