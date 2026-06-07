// WAP to print reverse pyramid
#include<stdio.h>
int main()
{
    int rows;
    printf("enter number of rows: ");
    scanf("%d",&rows);
    if (rows== 1 || rows<=0)
    {
        printf("invalid input. Please enter a positive integer.\n");
    }
    // Loop through each row
    for (int i=0;i<rows;i++)
    {
        // Print spaces
        for (int space=0;space<i;space++)
        {
            printf(" ");
        }
        // Print stars
        for (int star=0;star<(2*(rows-i)-1);star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
