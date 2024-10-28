#include <stdio.h>
#include <ctype.h>

int     ft_isprint(int c)
{
        if (c >= 32 && c <= 126)
                return (1);
        return (0);
}

int     main(void)
{
        char    ch1 = ' ';
        int     r1 = ft_isprint(ch1);
        int     r2 = isprint(ch1);


        printf("%c:\n", ch1);
        if (r1)
                printf("%d\n", r1);
        if (r2)
                printf("%d\n", r2);
}
