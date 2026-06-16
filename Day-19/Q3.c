//WAP to transpose a matrix
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],m,n,i,j;
    printf("enter matrix dimensions: ");
    scanf("%d%d",&m,&n);
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
        for (j=0;j<n;j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("The resultant transpose matrix is:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}