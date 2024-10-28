#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int      to_trim(const char *set, char c);
static char     *trimming(const char *s1, size_t start, size_t len);

char    *ft_strtrim(char const *s1, char const *set)
{
        size_t  i;
        size_t  j;

        i = 0;
        j = ft_strlen(s1) - 1;
        if (ft_strlen(s1) == 0)
                return (ft_strdup(""));
        while (to_trim(set, s1[i]))
                i++;
        while (to_trim(set, s1[j]))
                j--;
        return (trimming(s1, i, j - (i - 1)));
}

static int      to_trim(const char *set, char c)
{
        int     i;
        
        i = 0;
        while (set[i])
        {
                if (c == set[i])
                        return (1);
                i++;
        }
        return (0);
}

static char     *trimming(const char *s1, size_t start, size_t len)
{
        char    *trimmed;
        size_t  i;
        
        if (len <= 0 || start >= ft_strlen(s1))
                return (ft_strdup(""));
        trimmed = malloc(sizeof(char) * len + 1);
        if (!trimmed)
                return (NULL);
        i = 0;
        while (i < len)
        {
                trimmed[i] = s1[start + i];
                i++;
        }
        return (trimmed);
}

int     main(void)
{
        char    *s = "AAAABBAHELLO WORLDBBABABA";
        char    *set = "AB";
        char    *s_trimmed;

        printf("Original string: \"%s\"\n", s);
        printf("Set: {%s}\n", set);
        s_trimmed = ft_strtrim(s, set);
        printf("Trimmed string: \"%s\"\n", s_trimmed);
        return (0);
}
