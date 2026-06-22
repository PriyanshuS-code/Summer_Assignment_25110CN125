//WAP to find common character in string
#include<stdio.h>
#include<string.h>

void findCommon(char words[][50],int count)
{
    int common_freq[256];
    for(int i=0;i<256;i++)
    {
        common_freq[i] = 0;
    }
    for(int i=0;words[0][i] != '\0';i++)
    {
        common_freq[(unsigned char)words[0][i]] = 1;
    }
    
    for(int i=1;i<count;i++)
    {
        int current_freq[256] = {0};
        for(int j=0;words[i][j] != '\0';j++)
        {
            current_freq[(unsigned char)words[i][j]] = 1;
        }
        for(int k=0;k<256;k++)
        {
            if(common_freq[k] == 1 && current_freq[k] == 1)
            {
                common_freq[k] = 1;
            }
            else
            {
                common_freq[k] = 0;
            }
        }
    }
    printf("Common characters: ");
    for(int i=0;i<256;i++)
    {
        if(common_freq[i] == 1)
        {
            printf("%c ",i);
        }
    }
    printf("\n");
}
int main()
{
    char list[3][50] = {"apple", "apply", "aptitude"};
    findCommon(list, 3);
    return 0;
} 