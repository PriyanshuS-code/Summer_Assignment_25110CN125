//WAP to find largest and smallest element
#include<stdio.h>
int main()
{
    int arr[]={4,8,6,2,22,98,54};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min_val = arr[0];
    int max_val = arr[0];
    for (int i=1;i<n;i++)
    {
        if (arr[i]<min_val)
        {
            min_val=arr[i];
        }
        if (arr[i]>max_val)
        {
            max_val=arr[i];
        }
    }
    printf("array elements are: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("smallest element: %d\n",min_val);
    printf("largest element: %d\n",max_val);
    return 0;
}