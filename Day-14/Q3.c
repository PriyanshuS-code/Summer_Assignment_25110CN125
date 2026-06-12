//WAP to second largest element
#include<stdio.h>
int main()
{
    int n,i;
    int arr[n];
    printf("enter the number of elements in the array: ");
    scanf("%d",&n);
    if(n < 2)
    {
        printf("array should have at least two elements.\n");
        return 0;
    }
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int secondLargest = -2147483648;
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest)
        {
            secondLargest = arr[i];
        }
    }
    if(secondLargest == -2147483648)
    {
        printf("there is no second largest element.\n");
    }
    else
    {
        printf("the second largest element is %d\n",secondLargest);
    }
    return 0;
}