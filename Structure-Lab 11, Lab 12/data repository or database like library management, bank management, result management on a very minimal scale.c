#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct book {
    char title[50];
    char author[50];
    char ISBN[20];
    int available;
};

struct book library[MAX_BOOKS];
int num_books = 0;

void add_book() {
    if (num_books == MAX_BOOKS) {
        printf("Error: library is full\n");
        return;
    }
    printf("Enter title: ");
    scanf("%s", library[num_books].title);
    printf("Enter author: ");
    scanf("%s", library[num_books].author);
    printf("Enter ISBN: ");
    scanf("%s", library[num_books].ISBN);
    printf("Enter availability: ");
    scanf("%d", &library[num_books].available);
    num_books++;
}

void find_book() {
    char title[50];
    printf("Enter title to search for: ");
    scanf("%s", title);
    for (int i = 0; i < num_books; i++) {
        if (strcmp(library[i].title, title) == 0) {
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("ISBN: %s\n", library[i].ISBN);
            printf("Availability: %d\n", library[i].available);
            return;
        }
    }
    printf("Book not found\n");
}

void update_book() {
    char title[50];
    printf("Enter title to update: ");
    scanf("%s", title);
    for (int i = 0; i < num_books; i++) {
        if (strcmp(library[i].title, title) == 0) {
            printf("Enter new availability: ");
            scanf("%d", &library[i].available);
            printf("Book updated\n");
            return;
        }
    }
    printf("Book not found\n");
}

void delete_book() {
    char title[50];
    printf("Enter title to delete: ");
    scanf("%s", title);
    for (int i = 0; i < num_books; i++) {
        if (strcmp(library[i].title, title) == 0) {
            for (int j = i; j < num_books - 1; j++) {
                library[j] = library[j + 1];
            }
            num_books--;
            printf("Book deleted\n");
            return;
        }
    }
    printf("Book not found\n");
}

void print_menu() {
    printf("1. Add book\n");
    printf("2. Find book\n");
    printf("3. Update book\n");
    printf("4. Delete book\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    do {
        print_menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                find_book();
                break;
            case 3:
                update_book();
                break;
            case 4:
                delete_book();
                break;
            case 5:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
