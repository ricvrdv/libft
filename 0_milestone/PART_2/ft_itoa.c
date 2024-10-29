#include <stdio.h>
#include <stdlib.h>

static int      count_digits(long nbr);
char    *ft_itoa(int n);

char    *ft_itoa(int n)
{
        int     digits;
        char    *string;
        int     i;
        long    nbr;

        nbr = n;
        digits = count_digits(nbr);
        string = (char *)malloc(sizeof(char) * (digits + 1));
        if (!string)
                return (NULL);
        if (nbr < 0)
        {
                string[0] = '-';
                nbr = -nbr;
        }
        i = digits - 1;
        while (nbr > 0)
        {
                string[i] =((nbr % 10) + '0');
                nbr /= 10;
                i--;
        }
        if (n == 0)
                string[0] = '0';
        string[digits] = '\0';
        return (string);
}

static int      count_digits(long nbr)
{
        int     digits;

        digits = 1;
        if (nbr < 0)
        {
                digits++;
                nbr = -nbr;
        }
        while (nbr / 10 > 0)
        {
                nbr /= 10;
                digits++;
        }
        return (digits);
}

int     main(int argc, char *argv[])
{
        if (argc == 2)
        {
                printf("%s\n", argv[1]);
                printf("%s\n", ft_itoa(atoi(argv[1])));
                return (0);
        }
        return (1);
}
