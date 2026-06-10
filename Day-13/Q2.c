//WAP to find sum and average of an array
#include<stdio.h>
int main()
{
    int arr[10];
    int sum=0;
    printf("enter a integer :");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum: %d,Average: %.2f\n",sum,(float)sum/10);
    return 0;
}
