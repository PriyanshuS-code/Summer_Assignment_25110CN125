//WAP TO recursive reverse number
#include<stdio.h>
int reverseNumber(int n, int rev)
{
    if (n == 0)
    return rev;
    return reverseNumber(n/10,rev*10+n%10);
}
int main()
{
int num,reversed;
    printf("enter a number: ");
    scanf("%d",&num);
    reversed = reverseNumber(num, 0);
    printf("reversed number = %d\n",reversed);
    return 0;
}