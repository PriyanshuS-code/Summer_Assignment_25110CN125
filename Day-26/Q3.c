//WAP to create ATM simulation.
#include<stdio.h>
int main()
{
    int choice,pin = 9650,enteredPin;
    float balance = 999999.0,amount;
    printf("===== ATM SIMULATION =====\n");
    printf("please enter your card.");
    printf("Enter PIN: ");
    scanf("%d",&enteredPin);

    if (enteredPin != pin)
    {
        printf("Invalid PIN!\n");
        return 0;
    }

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Current Balance: Rs. %.2f\n",balance);
                break;
            case 2:
                printf("Enter amount to deposit: Rs. ");
                scanf("%f",&amount);
                if (amount > 0)
                {
                    balance += amount;
                    printf("Deposit Successful!\n");
                }
                else
                {
                    printf("Invalid Amount!\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: Rs. ");
                scanf("%f",&amount);
                if (amount > 0 && amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                }
                else
                {
                    printf("Insufficient Balance or Invalid Amount!\n");
                }
                break;
            case 4:
                printf("Thank you for using ATM!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    }
    while(choice != 4);
    return 0;
}