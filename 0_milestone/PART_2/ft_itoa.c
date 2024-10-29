#include <stdio.h>
#include <stdlib.h>

unsigned int    count_digits(int n);
char    *ft_itoa(int n);

char    *ft_itoa(int n)
{
    unsigned int    digits;
    unsigned int    len;
    char    *string;
    char    ch;

    digits = count_digits(n);
    len = digits;
    string = (char *)malloc(sizeof(char) * (digits + 1));
    if (!string)
        return (NULL);
    if (n < 0)
    {
        string[0] = '-';
        n = -n;
    }
    string[len] = '\0';
    while (n / 10 >= 0 && digits)
    {
        ch = (n % 10) + '0';
        string[digits - 1] = ch;
        n /= 10;
        digits--;
    }
    return (string);
}

unsigned int    count_digits(int n)
{
    unsigned int    digits;
    
    digits = 1;
    if (n < 0)
    {
        n = -n;
        digits++;
    }
    while (n/10 > 0)
    {
        n /= 10;
        digits++;
    }
    return (digits);
}

int main(void)
{
    int n = 0;
    char    *string;

    string = ft_itoa(n);
    printf("%s\n", string);
    return (0);
}