//WAP to create a number guessing game.
#include<stdio.h>
int main()
{
    int num,flag = 1,guess,count = 0;
    printf("Welcome to the Number Guessing Game!<br>");
    printf("enter the number to be guessed.");
    scanf("%d",&num);
    printf("I have a number between 1 and 100. Can you guess it?<br>");
    printf("Enter your guess: ");
    scanf("%d", &guess);

    do
    {
        if (num == guess)
        {
            flag = 0;
        }
        else if (guess < num)
        {
            flag = 1;
            printf("Your guess is lower than the number<br>");
            count++;
        }
        else
        {
            flag = 1;
            printf("Your guess is greater than the number<br>");
            count++;
        }
        
        if (flag == 1)
        {
            printf("Try again! Enter your next guess: ");
            scanf("%d", &guess);
        }
    }
    while (flag);
    printf("Congratulations! You guessed the correct number %d<br>",num);
    printf("Total number of attempts: %d<br>",count);
    return 0;
}