//WAP to find maximum frequency element
#include<stdio.h>
int findMaxFrequency(int arr[],int size)
{
    int max_element = arr[0];
    int max_count = 0;
    for (int i=0;i<size;i++)
    {
        int count = 0;
        for (int j=0;j<size;j++)
        {
            if (arr[j]==arr[i])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            max_element = arr[i];
        }
    }
    return max_element;
}
int main()
{
    int nums[] = {9,2,5,6,3,4,2,3,3,7};
    int size = sizeof(nums)/sizeof(nums[0]);
    int result = findMaxFrequency(nums,size);
    printf("the element with maximum frequency is: %d\n",result);
    return 0;
}