//WAP to check whether a num is prime
#include<stdio.h>
int main()
{
    int num,prime=1,i;
    printf("enter the number greater than 1:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    printf("%d is prime",num);
    else
    printf("%d is not prime",num);
return 0;
}