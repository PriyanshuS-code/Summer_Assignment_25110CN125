//WAP to check palindrome string
#include<stdio.h>
#include<string.h>
int main() 
{
    char str1[50],str2[50];
    printf("Enter string: ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);
    if (strcmp(str1,str2) == 0) 
    {
        printf("string is palindrome");
    } 
    else 
    {
        printf("string is not palindrome");
    }
    return 0;
}