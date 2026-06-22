//WAP to merge two sorted array
#include<stdio.h>
#include<stdlib.h>

void combine_sorted(const int *source_a, int size_a, const int *source_b, int size_b, int *destination)
{
    int index_a = 0,index_b = 0,target_index = 0;
    while (index_a < size_a && index_b < size_b)
    {
        destination[target_index++] = (source_a[index_a] <= source_b[index_b]) ? source_a[index_a++] : source_b[index_b++];
    }
    while (index_a < size_a)
    {
        destination[target_index++] = source_a[index_a++];
    }
    while (index_b < size_b)
    {
        destination[target_index++] = source_b[index_b++];
    }
}
int main()
{
    int first_arr[] = {1, 3, 5, 7};
    int second_arr[] = {2, 4, 6, 8};
    int total_elements = 8;
    int *output = (int *)malloc(total_elements * sizeof(int));
    combine_sorted(first_arr, 4, second_arr, 4, output);
    for (int i=0;i<total_elements;i++)
    {
        printf("%d ", output[i]);
    }
    free(output);
    return 0;
}