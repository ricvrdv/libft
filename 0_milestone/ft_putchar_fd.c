#include <unistd.h>
#include <stdlib.h>

void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

int     main(int argc, char *argv[])
{
        if (argc == 3)
        {
                ft_putchar_fd(argv[1][0], atoi(argv[2]));
                return (0);
        }
        return (1);
}
