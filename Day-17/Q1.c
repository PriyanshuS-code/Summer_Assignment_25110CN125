//WAP to merge an arrays
#include<stdio.h>
void mergeArrays(int arr1[],int size1,int arr2[],int size2,int merged[])
{
    int i,j;
    for (i=0;i<size1;i++)
    {
        merged[i] = arr1[i];
    }
    for (j = 0; j < size2; j++)
    {
        merged[size1 + j] = arr2[j];
    }
}

int main()
{
    int arr1[] = {10,20,30};
    int arr2[] = {40,50,60};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int merged[size1 + size2];  
    mergeArrays(arr1,size1,arr2,size2,merged);
    printf("Merged Array: ");
    for(int i=0;i<size1 + size2;i++)
    {
        printf("%d ",merged[i]);
    }
    return 0;
}