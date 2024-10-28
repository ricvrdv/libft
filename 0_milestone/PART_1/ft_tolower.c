#include <stdio.h>
#include <ctype.h>

int     ft_tolower(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (c + 32);
        return (c);
}

int     main(void)
{
        char    ch1 = 'G';

        printf("Character is \"%c\"\n", ch1);
        printf("%c (using ft_tolower())\n", ft_tolower(ch1));
        printf("%c (using tolower())\n", tolower(ch1));
}
