#include <unistd.h>
#include <stdlib.h>

void    ft_putendl_fd(char *s, int fd)
{
        int     i;

        i = 0;
        while (s[i])
        {
                write(fd, &s[i], 1);
                i++;
        }
        write(fd, "\n", 1);
}

int   main(int argc, char *argv[])
{
        if (argc == 3)
        {
                ft_putendl_fd(argv[1], atoi(argv[2]));
                return (0);
        }
        return (1);
}
