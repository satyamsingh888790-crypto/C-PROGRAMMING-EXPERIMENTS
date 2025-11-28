#include <stdio.h>

struct Book {
    int book_id;
    char title[100];
    char author[50];
    float price;
};

void printBook(struct Book b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book book;
    printf("Enter book ID: ");
    scanf("%d", &book.book_id);
    printf("Enter title: ");
    scanf("%s", book.title);
    printf("Enter author: ");
    scanf("%s", book.author);
    printf("Enter price: ");
    scanf("%f", &book.price);
    printf("\nBook Details:\n");
    printBook(book);
    return 0;
}
