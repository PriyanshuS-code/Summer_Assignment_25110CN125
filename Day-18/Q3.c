//WAP to binary search
#include<stdio.h>
int main() 
{
    int a[100],n,x,mid,low,high;
    int i,flag = 0;
    printf("enter no of elements: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to search: ");
    scanf("%d",&x);
    low = 0;
    high = n-1;
    while (low <= high) 
    {
        mid = (low + high) / 2;
        if (a[mid] == x) 
        {
            flag = 1;
            break;
        } 
        else if (a[mid] > x) 
        {
            high = mid - 1;
        } 
        else 
        {
            low = mid + 1;
        }
    }
    if (flag == 1) 
    {
        printf("Element present at %d",mid + 1);
    } 
    else 
    {
        printf("Unsuccessful search");
    }
    return 0;
}