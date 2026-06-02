//WAP to print factor of a num
#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a positive number:");
    scanf("%d",&num);
    printf("factor of %d are:",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}