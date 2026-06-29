//WAP to create mini library system
#include<stdio.h>
#include<string.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

struct Book library[100];
int count = 0;
// Add Book
void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &library[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", library[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", library[count].author);

    library[count].issued = 0;
    count++;

    printf("Book Added Successfully!\n");
}
// Display Books
void displayBooks()
{
    int i;
    if (count == 0)
    {
        printf("\nNo books in library.\n");
        return;
    }

    printf("\n----- Library Books -----\n");
    printf("ID\tTitle\t\tAuthor\t\tStatus\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%s\t\t%s\n",
               library[i].id,
               library[i].title,
               library[i].author,
               library[i].issued ? "Issued" : "Available");
    }
}
// Issue Book
void issueBook()
{
    int id, i;
    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            if (library[i].issued == 0)
            {
                library[i].issued = 1;
                printf("Book Issued Successfully!\n");
            }
            else
            {
                printf("Book is already issued.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}
// Return Book
void returnBook()
{
    int id, i;
    printf("\nEnter Book ID to Return: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            if (library[i].issued == 1)
            {
                library[i].issued = 0;
                printf("Book Returned Successfully!\n");
            }
            else
            {
                printf("Book was not issued.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}

int main()
{
    int choice;
    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                issueBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 5);
    return 0;
}