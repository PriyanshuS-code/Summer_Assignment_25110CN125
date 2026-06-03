//WAP to count digit in a number
#include<stdio.h>
int main(){
    long long n;
    int count=0;
    printf("enter an integer:");
    scanf("%lld",&n);

    do{
        n=n/10;
        count=count+1;
    }
    while(n != 0);
    printf ("number of digit = %d",count);
}