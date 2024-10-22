#include <stdio.h>

int     ft_isalpha(int c)
{
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                return (1);
        return (0);
}

int     main(int argc, char *argv[])
{
        if (argc == 2)
        {
                int c = ft_isalpha(argv[1][0]);
                if (c)
                        printf("%c is an alphabetic character.\n", argv[1][0]);
                else
                        printf("%c is not an alphabetic character.\n", argv[1][0]);
                return (0);
        }
        return (1);
}
