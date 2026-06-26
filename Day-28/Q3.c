//WAP to create a ticket booking system
#include<stdio.h>
int main()
{
    int seats[10] = {0}; // 0 = Available, 1 = Booked
    int choice,seat,i;
    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. View Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                printf("\nSeat Status:\n");
                for (i = 0; i < 10; i++)
                {
                    if (seats[i] == 0)
                        printf("Seat %d : Available\n", i + 1);
                    else
                        printf("Seat %d : Booked\n", i + 1);
                }
                break;

            case 2:
                printf("Enter seat number to book (1-10): ");
                scanf("%d", &seat);
                if (seat < 1 || seat > 10)
                {
                    printf("Invalid seat number!\n");
                }
                else if (seats[seat - 1] == 1)
                {
                    printf("Seat already booked!\n");
                }
                else
                {
                    seats[seat - 1] = 1;
                    printf("Ticket booked successfully!\n");
                }
                break;

            case 3:
                printf("Enter seat number to cancel (1-10): ");
                scanf("%d", &seat);
                if (seat < 1 || seat > 10)
                {
                    printf("Invalid seat number!\n");
                }
                else if (seats[seat - 1] == 0)
                {
                    printf("Seat is already available!\n");
                }
                else
                {
                    seats[seat - 1] = 0;
                    printf("Ticket cancelled successfully!\n");
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