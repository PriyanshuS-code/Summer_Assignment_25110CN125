// WAP TO print star pyramid
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
    // Outer loop for each row
    for (int i=1;i<=rows;i++)
    {
        // Print spaces before stars
        for (int space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        // Print stars (2*i - 1 stars in each row)
        for (int star=1;star<=(2*i-1);star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
