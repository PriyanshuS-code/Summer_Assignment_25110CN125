//WAP to find diagonal sum
#include <stdio.h>

int main()
{
    int a[10][10],m,n,i,j,s1=0,s2=0;
    printf("enter matrix dimensions: ");
    scanf("%d%d",&m,&n);
    if (m == n)
    {
        printf("enter the matrix:\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            s1 = s1 + a[i][i];
            s2 = s2 + a[i][m - 1 - i];
        }
        printf("The sum of main diagonal elements = %d\n",s1);
        printf("The sum of off diagonal elements = %d\n",s2);
    }
    else
    {
        printf("cannot generate sum of diagonals\n");
    }
    return 0;
}