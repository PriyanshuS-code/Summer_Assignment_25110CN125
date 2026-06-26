//WAP to create bank account system
#include<stdio.h>
#include<string.h>

struct BankAccount
{
    int accNo;
    char name[50];
    float balance;
};
int main()
{
    struct BankAccount acc;
    int choice;
    float amount;
    while (1)
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &acc.accNo);

                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]", acc.name);

                printf("Enter Initial Balance: ");
                scanf("%f", &acc.balance);

                printf("Account created successfully!\n");
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                acc.balance += amount;
                printf("Amount deposited successfully!\n");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= acc.balance)
                {
                    acc.balance -= amount;
                    printf("Withdrawal successful!\n");
                }
                else
                {
                    printf("Insufficient balance!\n");
                }
                break;

            case 4:
                printf("\n--- Account Details ---\n");
                printf("Account Number : %d\n", acc.accNo);
                printf("Account Holder : %s\n", acc.name);
                printf("Balance        : %.2f\n", acc.balance);
                break;

            case 5:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}