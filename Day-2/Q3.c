//WAP to find product of a digit
#include<stdio.h>
int main()
{
    int num,rem,prod=1;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        prod=prod*rem;
        num=num/10;
    }
    printf("product of digit of num = %d",prod);
    return 0;
}