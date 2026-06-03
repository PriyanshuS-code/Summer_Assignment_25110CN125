//sum of n natural number
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter a positive number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of n natural nuber = %d",sum);
    return 0;
}