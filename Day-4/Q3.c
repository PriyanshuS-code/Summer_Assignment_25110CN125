//WAP to check armstrong number
#include<stdio.h>
int main()
{
    int n,sum=0,r,temp;
    printf("enter a three number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Num is armstrong.");
    }
    else
    {
        printf("Num is not armstrong.");
    }
    return 0;
}