#include <unistd.h>
#include <stdlib.h>

void    ft_putnbr_fd(int n, int fd)
{
        char    digit;

        if (n == -2147483648)
        {
                write(fd, "-2147483648", 11);
                return ;
        }
        if (n < 0)
        {       
                write(fd, "-", 1);
                n = -n;
        }
        if (n > 9)
                ft_putnbr_fd(n / 10, fd);
        digit = (n % 10) + '0';
        write(fd, &digit, 1);
}

int     main(void)
{
        int     fd = 1;
        
}
