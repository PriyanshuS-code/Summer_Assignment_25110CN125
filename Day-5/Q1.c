//WAP to check perfect number
#include<stdio.h>
int main()
{
    int num,i,sum=0,rem;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("given number is a perfect number");
    }
    else
    printf("the given number is not a perfect number");
return 0;
}