//WAP to print reverse star pattern
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
    for (int i=rows;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
