#include "libftprintf.h"

static void     check_specifier(char s, va_list *args, int *len, int *i);

int     ft_printf(const char *format, ...)
{
        va_list args;
        int     len;
        int     i;

        va_start(args, format);
        len = 0;
        i = 0;
        while (format[i] != '\0')
        {
                if (format[i] == '%')
                {
                        i++;
                        check_specifier(format[i], &args, &len, &i);
                        i++;
                }
                else
                {
                        ft_putchar_len((char)format[i], &len);
                        i++;
                }
        }
        va_end(args);
        return (len);
}

static void     check_specifier(char sp, va_list *args, int *len, int *i)
{
        if (sp == 'c')
                ft_putchar_len(va_arg(*args, int), len);
        else if (sp == 's')
                ...;
        else if (sp == 'p')
                ...;
        else if (sp == 'd' || sp == 'i')
                ...;
        else if (sp == 'u')
                ...;
        else if (sp == 'x')
                ...;
        else if (sp == 'X')
                ...;
        else if (sp == '%')
                ...;
        else
                (*i)--;
}
