#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        const unsigned char     *ptr_src;
        unsigned char           *ptr_dest;
        size_t                          i;

        if (!src && !dest)
                return (NULL);
        ptr_src = (const unsigned char *)src;
        ptr_dest = (unsigned char *)dest;
        i = 0;
        while (i < n)
        {
                ptr_dest[i] = ptr_src[i];
                i++;
        }
        return (dest);
}

int   main(void)
{
        char    buffer_src_1[] = "Hello";
        char    buffer_dest_1[] = "----------";
        char    buffer_src_2[] = "Hello";
        char    buffer_dest_2[] = "----------";

        printf("Source 1:\n\"%s\"\n", buffer_src_1);
        printf("Destination 1 before:\n\"%s\"\n", buffer_dest_1);

        ft_memcpy(buffer_dest_1, buffer_src_1, 5);
        printf("Destination 1 after (ft_memcpy()):\n\"%s\"\n\n", buffer_dest_1);

        printf("Source 2:\n\"%s\"\n", buffer_src_2);
        printf("Destination 2 before:\n\"%s\"\n", buffer_dest_2);
        
        memcpy(buffer_dest_2, buffer_src_2, 5);
        printf("Destination 2 after (memcpy()):\n\"%s\"\n", buffer_dest_2);
        return (0);
}
