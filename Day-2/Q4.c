//WAP to check wheather a num is palindrome
#include<stdio.h>
int main()
{
    int num,rev=0,rem,original;
    printf("enter a number:");
    scanf("%d",&num);
    original = num;
    while(num != 0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(original == rev)
    {
        printf("%d is a palindrome.",original);
    }
    else
    printf("%d is not palindrome.",original);
return 0;
}