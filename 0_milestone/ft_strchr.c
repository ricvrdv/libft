#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *s, int c)
{
    unsigned char   ch;
    
    ch = (unsigned char)c;
    while (*s != '\0')
    {
        if (*s == ch)
            return ((char *)s);
        s++;
    }
    if (ch == '\0')
        return ((char *)s);
    return (NULL);
}

int main(void)
{
    char    string[] = "ornitorrinco";
    char    to_locate = 't';
    char    *location = ft_strchr(string, to_locate);
    
    printf("String: \"%s\"\tTo locate: \"%c\"\n", string, to_locate);
    printf("Found: %c\n", *location);
    // To change the value at location:
    // First we need to change the string declaration to:
    // char string[] = "ornitorrinco";
    // *location = 'x';
    // printf("%s", string);
    return (0);
}