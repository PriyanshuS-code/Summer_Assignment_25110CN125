//WAP to count set bits in a number
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n)
    {
        count=count+n&1;
        n=n>>1;
    }
    printf("no.of set of bits = %d\n",count);
    return 0;
}