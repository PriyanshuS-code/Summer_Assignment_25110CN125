//WAP to find pair with a given sum
#include<stdio.h>
void checkForSum(int arr[],int n,int s)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]+arr[j]==s)
            {
                printf("pair of elements can make the given sum by the value of index %d and %d",i,j);
                return;
            }
        }
    }
    printf("No pair can make the given sum.");
}
int main()
{
    int arr[]={ 3,9,1,7,4,6};
    int s=11;
    printf("The given array : ");
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe given sum : %d\n\n",s);
    checkForSum(arr,n,s);
    return 0;
}
