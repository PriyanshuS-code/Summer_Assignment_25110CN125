//WAP To write function for fibonacci serries
#include <stdio.h>
void printFibonacci(int n)
{
    int first=0,second=1,next;
    printf("fibonacci Series: ");
    for (int i=0;i<n;i++)
    {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}

int main()
{
    int n;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    printFibonacci(n);
    return 0;  
}