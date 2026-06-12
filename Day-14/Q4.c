//WAP to find duplicate in array
#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements -\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("duplicate elements in the array are: ");
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                printf("%d ",arr[i]);
                break;
            }
        }
    }
    return 0;
}