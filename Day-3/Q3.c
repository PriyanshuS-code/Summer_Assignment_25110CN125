// WAP to find GCD of two number
#include<stdio.h>
int main()
{
    int num1,num2,temp=0;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    while(num2!=0) //here we have used euclidean algo, gcd(a,b)=gcd(b,a%b)
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    printf("GCD of two number = %d",num1);
    return 0;
}