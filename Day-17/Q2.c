//WAP to union of array
#include<stdio.h>
int main()
{
    int A[] = {2,4,6,8};
    int B[] = {4,8,12,16,20};
    int sizeA = sizeof(A)/sizeof(A[0]);
    int sizeB = sizeof(B)/sizeof(B[0]);
    int result[sizeA + sizeB];
    int sizeR = 0;
    for(int i=0;i<sizeA;i++)
    {
        result[sizeR++] = A[i];
    }
    for(int i=0;i<sizeB;i++)
    {
        int exists = 0;
        for(int j=0;j<sizeR;j++)
        {
            if(B[i] == result[j])
            {
                exists = 1;
                break;
            }
        }
        if(!exists)
        {
            result[sizeR++] = B[i];
        }
    }
    printf("Union of two arrays: ");
    for(int i=0;i<sizeR;i++)
    {
        printf("%d ",result[i]);
    }
    printf("\n");
    return 0;
}