//WAP to create contact management system
#include<stdio.h>
#include<string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[100];
    int n = 0,choice,i;
    char search[50];
    while (1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                n++;
                printf("Contact added successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No contacts available.\n");
                }
                else
                {
                    printf("\nContact List:\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name  : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);
                    }
                }
                break;

            case 3:
                printf("Enter name to search: ");
                scanf(" %[^\n]", search);
                for (i = 0; i < n; i++)
                {
                    if (strcmp(c[i].name, search) == 0)
                    {
                        printf("\nContact Found!\n");
                        printf("Name  : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);
                        break;
                    }
                }
                if (i == n)
                {
                    printf("Contact not found.\n");
                }
                break;

            case 4:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}