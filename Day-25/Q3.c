//WAP to sort name alphabetically
#include<stdio.h>
#include<string.h>
int main()
{
    char names[5][50] = {"Zara", "Alice", "Michael", "Bob", "David"};
    int n = 5;
    char temp[50];
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(names[j],names[j+1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    printf("Names in alphabetical order:\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}