#include "libft.h"

void    ft_putstr_len(char *s, int *len)
{
        ft_putstr_fd(s, 1);
        len += ft_strlen(s);
}
