#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[40];
    char author[30];
    float price;
    int pages;
};
int main() {
    struct Book myBook;
    struct Book *bookPtr;
    bookPtr = &myBook;
    int id;
    char title[40];
    char author[30];
    float price;
    int pages;
    
    scanf("%d", &id);
    scanf("%s", title);
    scanf("%s", author);
    scanf("%f", &price);
    scanf("%d", &pages);
    
    bookPtr->id = id;
    strcpy(bookPtr->title, title);
    strcpy(bookPtr->author, author);
    bookPtr->price = price;
    bookPtr->pages = pages;
    bookPtr->price = bookPtr->price * 0.9;
    bookPtr->pages += 50;
    
    printf("Book Information:\n");
    printf("ID: %d\n", bookPtr->id);
    printf("Title: %s\n", bookPtr->title);
    printf("Author: %s\n", bookPtr->author);
    printf("Price: %.2f\n", bookPtr->price);
    printf("Pages: %d\n", bookPtr->pages);
    printf("Price per page: %.2f\n", bookPtr->price / bookPtr->pages);
    return 0;
}