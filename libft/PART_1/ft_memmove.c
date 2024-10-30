#include <stdio.h>
#include <string.h>
#include "libft.h"

void    *ft_memmove(void *dest, const void * src, size_t n)
{
        const unsigned char     *ptr_src;
        unsigned char   *ptr_dest;
        size_t  i;

        ptr_src = (const unsigned char *)src;
        ptr_dest = (unsigned char *)dest;
	if (ptr_dest == ptr_src)
                return (dest);
        i = n;
        if (ptr_dest > ptr_src)
        {
                while (i > 0)
                {
                        ptr_dest[i - 1] = ptr_src[i - 1];
                        i--;
                }
        }
        else
		ft_memcpy(ptr_dest, ptr_src, n);
        return (dest);
}

int     main(void)
{
        char    buffer_src_1[] = "Hello, world!";
        char    buffer_dest_1[] = "---------------";
        char    buffer_src_2[] = "Hello, world!";
        char    buffer_dest_2[] = "---------------";

        printf("Source 1: \"%s\"\n", buffer_src_1);
        printf("Destination 1: \"%s\"\n", buffer_dest_1);
        ft_memmove(buffer_src_1 + 7, buffer_src_1 + 1, 5);
        printf("After ft_memmove(): \"%s\"\n\n", buffer_src_1);

        printf("Source 2: \"%s\"\n", buffer_src_2);
        printf("Destination 2: \"%s\"\n", buffer_dest_2);
        memmove(buffer_src_2 + 7, buffer_src_2 + 1, 5);
        printf("After memmove():    \"%s\"\n", buffer_src_2);
        return (0);
}
