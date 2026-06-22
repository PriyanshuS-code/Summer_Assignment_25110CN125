//WAP to compress a string
#include<stdio.h>
#include<string.h>
void compressString(char str[])
{
    int len = strlen(str);
    if (len == 0) return;
    int i = 0;
    while (i < len)
    {
        int count = 1;    
        while (i+1<len && str[i]==str[i+1])
        {
            count++;
            i++;
        }
        printf("%c%d",str[i],count);
        i++;
    }
    printf("\n");
}
int main()
{
    char text[] = "aaaaabcccdd";
    printf("Original: %s\n", text);
    printf("Compressed: ");
    compressString(text);
    return 0;
}