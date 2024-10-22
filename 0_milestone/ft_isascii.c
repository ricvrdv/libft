#include <stdio.h>

int     ft_isascii(int c)
{
        if (c >= 0 && c <= 127)
                return (1);
        return (0);
}

int     main(void)
{
        char    ch1 = 'a';
        char    ch2 = '\n';
        char    ch3 = '7';
        char    ch4 = ' ';

        if (ft_isascii(ch1))
                printf("\"%c\" is an ASCII character.\n", ch1);
        if (ft_isascii(ch2))
                printf("\"%c\"(\\n) is an ASCII character.\n", ch2);
        if (ft_isascii(ch3))
                printf("\"%c\" is an ASCII character.\n", ch3);
        if (ft_isascii(ch4))
                printf("\"%c\" is an ASCII character.\n", ch4);
}
