//WAP to print number triangle
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
        // Inner loop for printing numbers from 1 to i
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
