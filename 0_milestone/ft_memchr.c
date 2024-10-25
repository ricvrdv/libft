#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
        unsigned char   *ptr_s;
        unsigned char   ch;
        size_t          i;
        
        ptr_s = (unsigned char *)s;
        ch = (unsigned char)c;
        i = 0;
        while (i < n)
        {
               if (ptr_s[i] == ch)
                       return ((void *)(ptr_s + i));
               i++;
        }
        return (NULL);
}       

int     main(void)
{
        char    *buffer = "Unts Unts";
        unsigned char   to_locate= 's';
        size_t  n_bytes = 3;
        char    *ptr_buffer_1 = ft_memchr(buffer, to_locate, n_bytes);
        char    *ptr_buffer_2 = memchr(buffer, to_locate, n_bytes);
        
        printf("Buffer 1: \"%s\"\tTo locate: \"%c\"\n", buffer, to_locate);
        printf("First instance (using ft_memchr): \"%s\"\n", ptr_buffer_1);
        printf("First instance (using memchr):    \"%s\"\n", ptr_buffer_2);
        return (0);
}
