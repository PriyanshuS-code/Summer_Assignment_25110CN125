//WAP to write function for armstrong
#include<stdio.h>
#include<math.h>

int isArmstrong(int num);
int main()
{
    int num;
    printf("enter any number: ");
    scanf("%d",&num);
    if(isArmstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    return 0;
}

int isArmstrong(int num) 
{
    int lastDigit,sum=0,originalNum,digits;
    originalNum = num;
    digits = (int) log10(num) + 1;
    while(num > 0)
    {
        lastDigit = num % 10;
        sum = sum + round(pow(lastDigit, digits));
        num = num / 10;
    }
    return (originalNum == sum);
}