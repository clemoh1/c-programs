//book structure
#include <stdio.h>
#include <string.h>

// Define the structure 'book'
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    // Declare a variable and initialize it
    struct book myBook = {"Introduction to C Programming", "John Smith", 2022, "9780131103627", 49.99};

    // Print the initialized values
    printf("Book details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n\n", myBook.price);

    // Prompt the user to enter the details
    struct book userBook;

    printf("Enter the book title: ");
    fgets(userBook.title, sizeof(userBook.title), stdin);
    userBook.title[strcspn(userBook.title, "\n")] = '\0'; // Remove newline character

    printf("Enter the author name: ");
    fgets(userBook.author, sizeof(userBook.author), stdin);
    userBook.author[strcspn(userBook.author, "\n")] = '\0'; // Remove newline character

    printf("Enter the publication year: ");
    scanf("%d", &userBook.publication_year);

    printf("Enter the ISBN: ");
    scanf("%s", userBook.ISBN);

    printf("Enter the price: ");
    scanf("%f", &userBook.price);

    // Print the entered values
    printf("\nBook details entered by user:\n");
    printf("Title: %s\n", userBook.title);
    printf("Author: %s\n", userBook.author);
    printf("Publication Year: %d\n", userBook.publication_year);
    printf("ISBN: %s\n", userBook.ISBN);
    printf("Price: $%.2f\n", userBook.price);

    return 0;
}
