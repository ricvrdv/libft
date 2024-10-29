#include <stdio.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int  i;

    i = 0;
    while (s[i] != '\0')
    {
        (*f)(i, &s[i]);
        i++;
    }
}

void    test_tolower(unsigned int i, char *c)
{
        (void)i;
        if (*c >= 'A' && *c<= 'Z')
                *c += 32;
}

int     main(int argc, char *argv[])
{
        if (argc == 2)
        {
                printf("Before: \"%s\"\n", argv[1]);
                ft_striteri(argv[1], test_tolower);
                printf("After:  \"%s\"\n", argv[1]);
                return (0);
        }
        return (1);
}