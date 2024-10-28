#include <stdio.h>

char    *ft_strrchr(const char *s, int c)
{
    char   ch;
    int  len;
    
    ch = (char)c;
    len = 0;
    while (s[len])
        len++;
    while (len >= 0)
    {
        if (s[len] == ch)
            return ((char *)&s[len]);
        len--;
    }
    return (NULL);
}

int main(void)
{
    char    *string = "ornitorrinco";
    char    to_locate = 'i';
    char    *location = ft_strrchr(string, to_locate);

    printf("String: \"%s\"\tTo locate: \"%c\"\n", string, to_locate);
    printf("Found: %s\n", location);
    //*location = 'x';
    //printf("%s\n", string);
    return (0);
}