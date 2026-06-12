//WAP to linear search
#include<stdio.h>
int main()
{
    int a[100],x,n,i,flag=0;
    printf("enter no of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements to be searched:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
    printf("element found at %dth position",i+1);
    }
    else
    {
    printf("unsuccessful search");
    }
    return 0;
}