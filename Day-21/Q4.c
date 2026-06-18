//WAP to convert lowercase to uppercase
#include<stdio.h>
#define MAX_SIZE 100 
int main()
{
    char str[MAX_SIZE];
    int i;
    printf("enter your text : ");
    gets(str);
    for(i=0; str[i]!=0; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Uppercase string : %s",str);
    return 0;
}