//WAP to rotate array left
#include<stdio.h>
int main()
{
    int n,d,i,j,temp;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter number of positions to rotate left: ");
    scanf("%d",&d);
    d = d % n;
    for(i=0;i<d;i++)
    {
        temp=arr[0];
        for(j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    printf("array after rotating left by %d positions:\n", d);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}