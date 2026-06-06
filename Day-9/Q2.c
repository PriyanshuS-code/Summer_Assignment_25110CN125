//WAP to print reverse number triangle
#include<stdio.h>
int main()
{
    int rows;
    printf("enter number of rows:");
    scanf("%d",&rows);
    if (rows==1 || rows<=0)
    {
        printf("invalid input. Please enter a positive integer.\n");
    }
    // Outer loop for rows
    for (int i=rows;i>=1;i--)
    {
        // Inner loop for numbers in each row
        for (int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
