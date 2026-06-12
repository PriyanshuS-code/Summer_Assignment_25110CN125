//WAP to reverse an array
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n],rev[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev[i]=arr[n-1-i];
    }
    printf("reversed array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",rev[i]);
    }
    return 0;
}