#include <stdio.h>
#include <ctype.h>

int     ft_isascii(int c)
{
        if (c >= 0 && c <= 127)
                return (1);
        return (0);
}

/*int   main(int argc, char *argv[])
{
        int     c1;
        int     c2;

        if (argc == 2)
        {
                c1 = ft_isascii(argv[1][0]);
                c2 = isascii(argv[1][0]);
                printf("Using ft_isascii (return value = %d)\n", c1);
                if (c1)
                        printf("\"%c\" is an ASCII character.\n\n", argv[1][0]);
                else
                        printf("\"%c\" is not an ASCII character.\n\n", argv[1][0]);
                printf("Using isascii    (return value = %d)\n", c2);
                if (c2)
                        printf("\"%c\" is an ASCII character.\n", argv[1][0]);
                else
                        printf("\"%c\" is not an ASCII character.\n", argv[1][0]);
                return (0);
        }
        return (1);
}*/
