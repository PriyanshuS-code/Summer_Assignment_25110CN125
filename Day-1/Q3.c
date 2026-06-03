//WAP to find factorial of a given number
#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long fact=1;
    printf("enter a number whose fact to be calculated:");
    scanf("%d",&n);
    if(n<0)
    {
    printf("error! fact of a negative number does not exist");
    }
    else
    {
    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    printf("Factorial of %d = %llu",n,fact);
    }
    return 0;
}