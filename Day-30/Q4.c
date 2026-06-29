//WAP to Develop complete mini project using arrays, strings and functions.
#include<stdio.h>
#include<string.h>
#define MAX 100

char website[MAX][30];
char username[MAX][30];
char password[MAX][30];
int total = 0;

void addAccount();
void displayAccounts();
void searchAccount();
void updatePassword();
void deleteAccount();

int main()
{
    int choice;
    while (1)
    {
        printf("\n========== PASSWORD VAULT ==========\n");
        printf("1. Add Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Website\n");
        printf("4. Update Password\n");
        printf("5. Delete Account\n");
        printf("6. Total Accounts\n");
        printf("7. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addAccount();
            break;
        case 2:
            displayAccounts();
            break;
        case 3:
            searchAccount();
            break;
        case 4:
            updatePassword();
            break;
        case 5:
            deleteAccount();
            break;
        case 6:
            printf("\nTotal Saved Accounts = %d\n", total);
            break;
        case 7:
            printf("\nThank You!\n");
            return 0;
        default:
            printf("\nInvalid Choice!\n");
        }
    }
}

void addAccount()
{
    if (total == MAX)
    {
        printf("Storage Full!\n");
        return;
    }

    printf("Website: ");
    scanf("%s", website[total]);

    printf("Username: ");
    scanf("%s", username[total]);

    printf("Password: ");
    scanf("%s", password[total]);

    total++;
    printf("Account Saved Successfully!\n");
}

void displayAccounts()
{
    if (total == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\n------------------------------------------\n");
    for (int i = 0; i < total; i++)
    {
        printf("Record %d\n", i + 1);
        printf("Website : %s\n", website[i]);
        printf("Username: %s\n", username[i]);
        printf("Password: %s\n", password[i]);
        printf("------------------------------------------\n");
    }
}
void searchAccount()
{
    char key[30];
    int found = 0;
    printf("Enter Website: ");
    scanf("%s", key);
    for (int i = 0; i < total; i++)
    {
        if (strcmp(key, website[i]) == 0)
        {
            printf("\nWebsite : %s\n", website[i]);
            printf("Username: %s\n", username[i]);
            printf("Password: %s\n", password[i]);
            found = 1;
        }
    }
    if (!found)
        printf("Website Not Found!\n");
}

void updatePassword()
{
    char key[30];
    printf("Enter Website: ");
    scanf("%s", key);
    for (int i = 0; i < total; i++)
    {
        if (strcmp(key, website[i]) == 0)
        {
            printf("Enter New Password: ");
            scanf("%s", password[i]);
            printf("Password Updated!\n");
            return;
        }
    }
    printf("Website Not Found!\n");
}

void deleteAccount()
{
    char key[30];
    printf("Enter Website: ");
    scanf("%s", key);
    for (int i = 0; i < total; i++)
    {
        if (strcmp(key, website[i]) == 0)
        {
            for (int j = i; j < total - 1; j++)
            {
                strcpy(website[j], website[j + 1]);
                strcpy(username[j], username[j + 1]);
                strcpy(password[j], password[j + 1]);
            }
            total--;
            printf("Account Deleted!\n");
            return;
        }
    }
    printf("Website Not Found!\n");
}