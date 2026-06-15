//WAP to intersection of array
#include<stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int A[] = {1,2,3,4};
    int B[] = {3,4,5,6};
    int sizeA = sizeof(A)/sizeof(A[0]);
    int sizeB = sizeof(B)/sizeof(B[0]);
    int result[sizeA < sizeB ? sizeA : sizeB],sizeR = 0;
    qsort(A, sizeA, sizeof(int),compare);
    qsort(B, sizeB, sizeof(int),compare);
    int i=0,j=0;
    while(i<sizeA && j<sizeB)
    {
        if(A[i]<B[j])
        i++;
        else if(B[j] < A[i])
        j++;
        else
        {
            result[sizeR++] = A[i];
            i++;j++;
        }
    }
    printf("Intersection of two arrays: ");
    for(int k=0;k<sizeR;k++)
    {
        printf("%d ",result[k]);
    }
    printf("\n");
    return 0;
}