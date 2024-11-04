#include <stdlib.h>
#include <stdio.h>
#include "../libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *substring;
        size_t  s_len;
        size_t  i;

        if (!s)
                return (NULL);
        s_len = ft_strlen(s);
        if (start >= s_len)
                return (ft_strdup(""));
        if (len > s_len - start)
                len = s_len - start;
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

int   main(void)
{
        char    *string = "";
        char    *substring;
        size_t  len = 1;
        unsigned int    start = 3;

        printf("String: \"%s\"\tMax length: %zu\n", string, len);
        substring = ft_substr(string, start, len);
        printf("Substring: \"%s\"\n", substring);
        return (0);
}
