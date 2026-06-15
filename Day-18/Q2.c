//WAP to selection sort
#include<stdio.h>
int main()
{
    int a[50],n,i,j,temp;
    printf("enter the no of element: ");
    scanf("%d",&n);
    printf("enter list of element to be sorted: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0+i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("the sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}