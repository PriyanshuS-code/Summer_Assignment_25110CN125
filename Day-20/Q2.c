//WAP to check symettric matrix
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,row,col,count=0;
    printf("enter Number of rows and columns:  ");
    scanf("%d %d",&i,&j);
    if(i!=j)
    {
        printf("Rows not equal to columns. Therefore Non-Symmetric Matrix.");
        exit(0);
    }
    int a[i][j],b[i][j];
    printf("enter the Matrix Elements \n");
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            b[col][row] = a[row][col];
        }
    }
    
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            if(a[row][col] != b[row][col])
            {
                count++;
                break;
            }
        }
    }
    if(count == 0)
    {
        printf("\nThe given Matrix is a Symmetric Matrix ");
    }
    else
    {
        printf("\nThe given Matrix is Not a Symmetric Matrix ");
    }
    return 0;
}