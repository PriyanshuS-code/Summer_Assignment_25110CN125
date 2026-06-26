//WAP to create library management system
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_BOOKS 100
#define TITLE_LEN 100
#define AUTHOR_LEN 100

// Structure to store book details
typedef struct
{
    int id;
    char title[TITLE_LEN];
    char author[AUTHOR_LEN];
    int available; // 1 = available, 0 = issued
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

// Function prototypes
void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();

int main()
{
    int choice;
    while (1)
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by Title\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // clear input buffer
            continue;
        }

        switch (choice)
        {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: printf("Exiting program. Goodbye!\n"); exit(0);
            default: printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to add a new book
void addBook()
{
    if (bookCount >= MAX_BOOKS)
    {
        printf("Library is full! Cannot add more books.\n");
        return;
    }

    Book newBook;
    newBook.id = bookCount + 1;
    printf("Enter book title: ");
    getchar(); // clear newline from buffer
    fgets(newBook.title, TITLE_LEN, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; // remove newline

    printf("Enter author name: ");
    fgets(newBook.author, AUTHOR_LEN, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0';

    newBook.available = 1;
    library[bookCount++] = newBook;
    printf("Book added successfully! Book ID: %d\n", newBook.id);
}

// Function to display all books
void displayBooks()
{
    if (bookCount == 0)
    {
        printf("No books in the library.\n");
        return;
    }

    printf("\n%-5s %-30s %-20s %-10s\n", "ID", "Title", "Author", "Status");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < bookCount; i++)
    {
        printf("%-5d %-30s %-20s %-10s\n",
               library[i].id,
               library[i].title,
               library[i].author,
               library[i].available ? "Available" : "Issued");
    }
}

// Function to search for a book by title
void searchBook()
{
    char searchTitle[TITLE_LEN];
    int found = 0;
    printf("Enter book title to search: ");
    getchar();
    fgets(searchTitle, TITLE_LEN, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0';

    for (int i = 0; i < bookCount; i++)
    {
        if (strcasecmp(library[i].title, searchTitle) == 0)
        {
            printf("Book Found: ID=%d, Author=%s, Status=%s\n",
                   library[i].id,
                   library[i].author,
                   library[i].available ? "Available" : "Issued");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Book not found.\n");
    }
}

// Function to issue a book
void issueBook()
{
    int id;
    printf("Enter book ID to issue: ");
    if (scanf("%d", &id) != 1)
    {
        printf("Invalid input! Please enter a number.\n");
        while (getchar() != '\n');
        return;
    }

    for (int i = 0; i < bookCount; i++)
    {
        if (library[i].id == id)
        {
            if (library[i].available)
            {
                library[i].available = 0;
                printf("Book issued successfully.\n");
            }
            else
            {
                printf("Book is already issued.\n");
            }
            return;
        }
    }
    printf("Book ID not found.\n");
}

// Function to return a book
void returnBook()
{
    int id;
    printf("Enter book ID to return: ");
    if (scanf("%d", &id) != 1)
    {
        printf("Invalid input! Please enter a number.\n");
        while (getchar() != '\n');
        return;
    }

    for (int i = 0; i < bookCount; i++)
    {
        if (library[i].id == id)
        {
            if (!library[i].available)
            {
                library[i].available = 1;
                printf("Book returned successfully.\n");
            }
            else
            {
                printf("Book was not issued.\n");
            }
            return;
        }
    }
    printf("Book ID not found.\n");
}
