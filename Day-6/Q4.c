//WAP to find x^n without pow()
#include<stdio.h>
int main()
{
    int x,n;
    long long result=1;
    printf("enter base x:");
    scanf("%d",&x);
    printf("enter exponent n:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("%d^%d = %lld\n",x,n,result);
    return 0;
}