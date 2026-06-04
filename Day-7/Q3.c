//WAP to recursive sum of digit
#include<stdio.h>
int sumDigits(int n)
{
    if (n == 0)
    return 0;
    return (n % 10) + sumDigits(n / 10);
}
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("sum of digits = %d\n",sumDigits(num));
    return 0;
}