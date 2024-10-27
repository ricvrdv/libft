#include <stdlib.h>
#include <stdio.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substring;
    size_t  i;

    if (!s)
        return (NULL);
    substring = (char *)malloc(sizeof(char) * (len + 1));
    if (!substring)
        return (NULL);
    i = 0;
    while (s[start + i] != '\0' && i < len)
    {
        substring[i] = s[start + i];
        i++;
    }
    substring[i] = '\0';
    return (substring);
}

int main(void)
{
    char    *string = "ABCDEF";
    char    *substring;
    size_t  len = 3;
    unsigned int    start = 2;

    if (start >= len)
    {
        printf("Selected index is out of bounds");
    }
    printf("String:    \"%s\"\tMax length: %zu\n", string, len);
    substring = ft_substr(string, start, len);
    printf("Substring: \"%s\"\n", substring);
    return (0);
}