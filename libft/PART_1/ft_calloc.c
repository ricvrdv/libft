#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>
#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
        size_t  total_size;
        void    *buffer;

        if (nmemb != 0 && size > SIZE_MAX / nmemb)
        {
                errno = ENOMEM;
                return (NULL);
        }
        total_size = nmemb * size;
        buffer = malloc(total_size);
        if (!buffer)
        {
                errno = ENOMEM;
                return (NULL);
        }
        ft_memset(buffer, 0, total_size);
        return (buffer);
}

int     main(void)
{
        size_t  nmemb = 10;
        size_t  size = 4;
        size_t  i = 0;
        char    *buffer_1;
        char    *buffer_2;

        printf("%zu elements\t%zu bytes each\n", nmemb, size);
        
        buffer_1 = (char *)ft_calloc(nmemb, size);
        printf("Using ft_calloc(): [");
        while (i < nmemb)
        {
                printf("%d", buffer_1[i]);
                i++;
        }
        printf("]\n");
        free(buffer_1);

        buffer_2 = (char *)calloc(nmemb, size);
        printf("Using calloc():    [");
        i = 0;
        while (i < nmemb)
        {
                printf("%d", buffer_2[i]);
                i++;
        }
        printf("]\n");
        free(buffer_2);

        return (0);
}
