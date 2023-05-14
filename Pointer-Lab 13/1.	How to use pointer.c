#include <stdio.h>

int main() {
    int a = 10; // Declare and initialize an integer variable 'a'
    int *ptr; // Declare a pointer variable that will hold an address

    ptr = &a; // Assign the address of 'a' to the pointer variable

    printf("Value of 'a': %d\n", a); // Print the value of 'a'
    printf("Address of 'a': %p\n", &a); // Print the address of 'a'
    printf("Value of 'ptr': %p\n", ptr); // Print the value of the pointer variable 'ptr'
    printf("Value at address stored in 'ptr': %d\n", *ptr); // Print the value at the address stored in 'ptr'

    *ptr = 20; // Update the value at the address stored in 'ptr'

    printf("New value of 'a': %d\n", a); // Print the updated value of 'a'

    return 0;
}
