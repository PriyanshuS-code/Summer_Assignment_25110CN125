//WAP to print character pyramid
#include<stdio.h>
#include<ctype.h> // for toupper()
int main()
{
    int rows;
    printf("enter number of rows (1-26): ");
    scanf("%d",&rows);
    if (rows==1 || rows<1 || rows>26)
    {
        printf("invalid input. Please enter an integer between 1 and 26.\n");
    }
    for (int i=1;i<=rows;i++)
    {
        for (int space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        for (int ch=0;ch<i;ch++)
        {
            printf("%c",'A'+ch);
        }
        for (int ch=i-2;ch>=0;ch--)
        {
            printf("%c",'A'+ch);
        }
        printf("\n");
    }
    return 0;
}
