#include <unistd.h>
#include <stdlib.h>

void    ft_putstr_fd(char *s, int fd)
{
        size_t  i;

        i = 0;
        while (s[i])
        {
                write(fd, &s[i], 1);
                i++;
        }
}       

int     main(int argc, char *argv[])
{
        if (argc == 3)
        {
                ft_putstr_fd(argv[1], atoi(argv[2]));
                return (0);
        }
        return (1);
}
