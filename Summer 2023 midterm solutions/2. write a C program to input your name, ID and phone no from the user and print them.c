#include <stdio.h>

int main() {
    int id, phoneNumber;
    char name[50];

    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    printf("Enter your id: ");
    scanf("%d", &id);
    printf("Enter your phone: ");
    scanf("%d", &phoneNumber);
    

    printf("Name = %s\nID = %d\nPhone = %d", name, id, phoneNumber);

    return 0;
}
