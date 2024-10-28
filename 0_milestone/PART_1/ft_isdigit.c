#include <stdio.h>

int     isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        return (0);
}

int     main(void)
{
        char    ch1 = '1';
        char    ch2 = 'r';

        if (isdigit(ch1))
                printf("%c is a digit.\n", ch1);
        else
                printf("%c is not a digit.\n", ch1);

        if (isdigit(ch2))
                printf("%c is a digit.\n", ch2);
        else
                printf("%c is not a digit.\n", ch2);
}
