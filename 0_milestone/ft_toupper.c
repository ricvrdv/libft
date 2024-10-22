#include <stdio.h>
#include <ctype.h>

int     ft_toupper(int c)
{
        if (c >= 'a' && c <= 'z')
                return (c - 32);
        return (c);
}

int     main(void)
{
        char    ch1 = 'a';

        printf("Character is \"%c\"\n", ch1);
        printf("%c (using ft_toupper())\n", ft_toupper(ch1));
        printf("%c (using toupper())\n", toupper(ch1));
}
