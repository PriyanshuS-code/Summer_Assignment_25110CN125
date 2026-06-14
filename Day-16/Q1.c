//WAP to find missing number in array
#include<stdio.h>
int findMissingNumber(int arr[],int size)
{
    int n = size; 
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for (int i=0;i<size;i++)
    {
        actual_sum += arr[i];
    }
    return expected_sum - actual_sum;
}
int main()
{
    int arr[] = {6,3,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int missing = findMissingNumber(arr,size);
    printf("The missing number is: %d\n",missing);
    return 0;
}