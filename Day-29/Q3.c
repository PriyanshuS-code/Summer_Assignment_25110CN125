//WAP to Create menu-driven string operations system.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], temp[100];
    int choice;
    printf("Enter first string: ");
    scanf("%s", str1);
    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Length of string = %lu\n", strlen(str1));
            break;

        case 2:
            strcpy(temp, str1);
            printf("Copied string = %s\n", temp);
            break;

        case 3:
            printf("Enter second string: ");
            scanf("%s", str2);
            strcpy(temp, str1);
            strcat(temp, str2);
            printf("Concatenated string = %s\n", temp);
            break;

        case 4:
            printf("Enter second string: ");
            scanf("%s", str2);
            if (strcmp(str1, str2) == 0)
                printf("Both strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;

        case 5:
            strcpy(temp, str1);
            strrev(temp);   // Works in Turbo C/CodeBlocks (Windows)
            printf("Reversed string = %s\n", temp);
            break;

        case 6:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
} 