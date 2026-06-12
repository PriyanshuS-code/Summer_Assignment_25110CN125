//WAP to move all the zeroes to end
#include<stdio.h>
int main()
{
    int arr[]={0, 1, 0, 3, 12};
    int n=5;
    int result[5];
    int index=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i] != 0)
        {
            result[index++]=arr[i];
        }
    }
    while (index < n)
    {
        result[index++] = 0;
    }
    printf("array after moving zeros to end: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",result[i]);
    }
    return 0;
}