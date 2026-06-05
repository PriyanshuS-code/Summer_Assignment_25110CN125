//WAP to print half pyramid pattern
#include<stdio.h>
int main()
{
    int rows;
    // Prompt user for number of rows
    printf("enter the number of rows for the half pyramid:");
    scanf("%d",&rows);
    if (rows <= 0)
    {
        printf("number of rows must be a positive integer.\n");
        return 1;
    }
    // Print half pyramid
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
