// WAP to check strong number
#include<stdio.h>
int main()
{
    int num,original_num,lastdigit,sum=0;
    long fact;
    printf("enter a number:");
    scanf("%d",&num);
    original_num=num;
    while(num>0)
    {
        lastdigit=num%10;

        fact=1;
        for(int i=1;i<=lastdigit;i++)
    {
        fact=fact*i;
    }
    sum=sum+fact;
    num=num/10;
    }
    if(sum==original_num)
    {
        printf("%d is a strong num.\n",original_num);
    }
    else
    {
        printf("%d is not a strong number.\n",original_num);
    }
    return 0;
}