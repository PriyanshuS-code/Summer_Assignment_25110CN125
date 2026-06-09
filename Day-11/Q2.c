//Write a program to Write function to find maximum
#include<stdio.h>

int max(int,int);

int main()
{
    int a,b;
    printf("enter 2 number \n");
    scanf("%d%d",&a,&b);
    printf("max numb:%d,%d=%d",a,b,max(a,b));
    return 0;
}

int max(int x , int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}