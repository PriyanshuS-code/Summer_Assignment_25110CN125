//WAP to find longest word
#include<stdio.h>
#include<string.h>

void findLongestWord(char sentence[])
{
    int maxLen = 0;
    int maxStart = 0;
    int currentLen = 0;
    int currentStart = 0;
    int i = 0;

    while (1)
    {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\0')
        {
            if (currentLen > maxLen)
            {
                maxLen = currentLen;
                maxStart = currentStart;
            }
            if (sentence[i] == '\0')
            {
                break;
            }
            currentLen = 0;
        }
        else
        {
            if (currentLen == 0)
            {
                currentStart = i;
            }
            currentLen++;
        }
        i++;
    }
    // Print the longest word using its start position and length
    printf("Longest word: ");
    for (int j=0;j<maxLen;j++)
    {
        printf("%c",sentence[maxStart + j]);
    }
    printf("\n");
}
int main()
{
    char sentence[] = "priyanshu you are the number 1 coder in the world";
    findLongestWord(sentence);
    return 0;
}