//WAP to find lcm of two num
#include<stdio.h>
int main()
{
    int num1,num2,temp,gcd,lcm;
    printf("enter two number:");
    scanf("%d%d",&num1,&num2);
    int x=num1,y=num2;
    while(y!=0)
    {
        temp=y;
        y=x%y;
        x=temp;
    }
    gcd=x;
    lcm=(num1*num2)/gcd;
    printf("lcm of a number = %d",lcm);
    return 0;
}