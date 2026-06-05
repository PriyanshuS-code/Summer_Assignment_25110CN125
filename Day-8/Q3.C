//WAP to print character triangle
#include<stdio.h>
int main()
{
    int i,j,rows=5;
    for (i = 1; i <= rows; i++)
    {
        // Print characters from A to E
        for (j = 0; j < i; j++)
        {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}

