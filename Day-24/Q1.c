//WAP to check string rotation
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool is_rotation(const char *s1, const char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    // Strings must be the same length and not empty
    if (len1 != len2 || len1 == 0)
    {
        return false;
    }
    // Allocate memory for the concatenated string (len1 * 2 + 1 for null terminator)
    char *temp = (char *)malloc(sizeof(char) * (len1 * 2 + 1));
    if (temp == NULL)
    {
        return false;
    }
    // Copy s1 into temp, then append s1 again
    strcpy(temp, s1);
    strcat(temp, s1);
    // Check if s2 is a substring of the concatenated string
    bool result = (strstr(temp, s2) != NULL);
    // Free allocated memory to prevent leaks
    free(temp);
    return result;
}
int main()
{
    const char *string1 = "BBCD";
    const char *string2 = "BCDB";

    if (is_rotation(string1, string2))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}