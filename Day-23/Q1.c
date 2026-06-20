//WAP to find first non repeating character
#include<stdio.h>
#include<string.h>
#define MAX_CHARS 256 
char firstNonRepeating(char*str)
{
    int count[MAX_CHARS] = {0};
    int i;
    for (i=0;str[i] != '\0';i++)
    {
        count[(unsigned char)str[i]]++;
    }
    for (i=0;str[i] != '\0';i++)
    {
        if (count[(unsigned char)str[i]] == 1)
        {
            return str[i];
        }
    }
    return '\0';
}
int main()
{
    char str[] = "swiss";
    char result = firstNonRepeating(str);
    if (result != '\0')
    {
        printf("The first non-repeating character is: %c\n",result);
    }
    else
    {
        printf("All characters are repeating.\n");
    }
    return 0;
}
