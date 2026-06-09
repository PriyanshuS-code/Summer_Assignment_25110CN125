//WAP to Write function for perfect number
#include<stdio.h>
#include<math.h>

int isPerfect(int num);
int main()
{
    int num;
    
    printf("enter any number: ");
    scanf("%d",&num);
    if(isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }
    return 0;
}

int isPerfect(int num) 
{
    int i, sum, n;
    sum = 0;
    n = num;
    
    for(i=1; i<n; i++)  
    {    
        if(n%i == 0)  
        {  
            sum = sum+i;  
        }  
    }
    return (num == sum);
}