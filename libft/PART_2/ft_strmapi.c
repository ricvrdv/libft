#include <stdio.h>
#include <stdlib.h>

char    test_tolower(unsigned int i, char c);

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        char    *string;
        size_t  len;
        size_t  i;
        
        len = 0;
        while (s[len] != '\0')
                len++;
        string = (char *)malloc(sizeof(char) * (len + 1));
        if(!string)
                return (NULL);
        i = 0;
        while (s[i] != '\0')
        {
                string[i] = (*f)(i, s[i]);
                i++;
        }
        string[i] = '\0';
        return (string);
}

char    test_tolower(unsigned int i, char c)
{
        (void)i;
        if (c >= 'A' && c<= 'Z')
                return (c + 32);
        return (c);
}

int     main(int argc, char *argv[])
{
        char *new_string;

        if (argc == 2)
        {
                printf("Original: \"%s\"\n", argv[1]);
                new_string = ft_strmapi(argv[1], test_tolower);
                printf("New:      \"%s\"\n", new_string);
                return (0);
        }
        return (1);
}
