//WAP to Check anagram strings.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NO_OF_CHARS 256
int areAnagrams(char*str1,char*str2)
{
    int count[NO_OF_CHARS] = {0};
    int i;
    for (i=0;str1[i] != '\0';i++)
    {
        if (!isspace((unsigned char)str1[i]))
        {
            count[tolower((unsigned char)str1[i])]++;
        }
    }
    for (i = 0; str2[i] != '\0'; i++) {
        if (!isspace((unsigned char)str2[i]))
        {
            count[tolower((unsigned char)str2[i])]--;
        }
    }
    for (i = 0; i < NO_OF_CHARS; i++)
    {
        if (count[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str1[] = "Listen";
    char str2[] = "Silent";
    if (areAnagrams(str1, str2))
    {
        printf("\"%s\" and \"%s\" are anagrams.\n",str1,str2);
    }
    else
    {
        printf("\"%s\" and \"%s\" are not anagrams.\n",str1,str2);
    }
    return 0;
}