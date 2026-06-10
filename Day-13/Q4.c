//WAP to count even and odd elements
#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d integers:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total even elements: %d\n",even);
    printf("total odd elements: %d\n",odd);
    return 0;
}
