//WAP to print repeated number
#include<stdio.h>
int main()
{
    int rows;
    printf("enter number of rows: ");
    scanf("%d",&rows);
    if (rows == 1 || rows <= 0)
    {
        printf("invalid input. Please enter a positive integer.\n");
        return 1;
    }
    // Outer loop for rows
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}